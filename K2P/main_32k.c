// Manuel B. Santos - University of Lisbon IST, Maths Dep

#define LEN_SEQ 2000

typedef struct {
	unsigned int el[LEN_SEQ];
} Array_Seq;




/*

We aim to compute the following quantity: 

(N−2n1−n2)^2(N−2n2)

where N=32 000, n1 = nº of transitions and n2 = nº of transversions


Note that we are currently using the following encoding:
    A=00
        T=11
            C=01
                G=10

Taking into consideration that a transition is either a A <-> G or T <-> C substitution and transversion are all the other substitution possibilities, we have that:

A xor G = 00 xor 10 = 10   |  
T xor C = 11 xor 01 = 10   | Thus, we can find the number of transitions in a 16 bit string by:

n1 = 16 - popcount( A^B^AAAAAAAA )
where A and B are two 16 bit sequences.

Similarly, 

n2 = popcount(A^B) - n1

*/




const unsigned int m1  = 0x55555555; //binary: 0101...
const unsigned int m2  = 0x33333333; //binary: 00110011..
const unsigned int m4  = 0x0f0f0f0f; //binary:  4 zeros,  4 ones ...
const unsigned int m8  = 0x00ff00ff; //binary:  8 zeros,  8 ones ...
const unsigned int m16 = 0x0000ffff; //binary: 16 zeros, 16 ones ...



//This is an altered naive implementation, shown for comparison,
//and to help in understanding the better functions.
//It uses 24 arithmetic operations (shift, add, and, or).
int popcount(unsigned int INPUT_B_x) {
    int x = INPUT_B_x;
    x = (x & m1 ) | ((x >>  1) & m1 ); //
    x = (x & m2 ) + ((x >>  2) & m2 ); //put count of each  4 bits into those  4 bits
    x = (x & m4 ) + ((x >>  4) & m4 ); //put count of each  8 bits into those  8 bits
    x = (x & m8 ) + ((x >>  8) & m8 ); //put count of each 16 bits into those 16 bits
    x = (x & m16) + ((x >> 16) & m16); //put count of each 32 bits into those 32 bits
    return x;
}

void mpc_main(Array_Seq INPUT_A, Array_Seq INPUT_B)
{

	int n1_dist = 0;
	int n2_dist = 0;

	unsigned int seq;
	int x;
	int new_n1_dist;

	for(int i=0; i<LEN_SEQ; i++)
	{
		seq = INPUT_A.el[i]^INPUT_B.el[i];
		x = popcount( seq^0xAAAAAAAA );

		new_n1_dist = 16 - x;

		n1_dist = n1_dist + new_n1_dist;
		n2_dist = n2_dist + popcount(seq) - new_n1_dist;

	}
	
	int OUTPUT_distance;
	OUTPUT_distance = (32000 - 2*n1_dist-n2_dist)*(32000 - 2*n1_dist-n2_dist)*(32000-2*n2_dist);


}
