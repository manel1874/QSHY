#define LEN_SEQ 2000 // this gives the desired number of input bit elements to deal with 32k ACGT sequences: 32K ACGT = 64k binary and 2000 unsigned int = 2000 x 32 = 64k

typedef struct {
	unsigned int el[LEN_SEQ];
} Array_Seq;

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
    x = (x & m1 ) | ((x >>  1) & m1 ); //or operation instead of add. put signal to difference in 2 bits element
    x = (x & m2 ) + ((x >>  2) & m2 ); //put count of each  4 bits into those  4 bits
    x = (x & m4 ) + ((x >>  4) & m4 ); //put count of each  8 bits into those  8 bits
    x = (x & m8 ) + ((x >>  8) & m8 ); //put count of each 16 bits into those 16 bits
    x = (x & m16) + ((x >> 16) & m16); //put count of each 32 bits into those 32 bits
    return x;
}

void mpc_main(Array_Seq INPUT_A, Array_Seq INPUT_B)
{

	int distance = 0;

	for(int i=0; i<LEN_SEQ; i++)
	{
		distance = distance + popcount(INPUT_A.el[i]^INPUT_B.el[i]);
	}
	
	int OUTPUT_distance;
	OUTPUT_distance = distance;
}
