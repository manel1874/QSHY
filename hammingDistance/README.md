In [stringSearch](stringSearch/README.md) we explain the integration of the four building blocks of QSHY (libscapi, mpc-benchmark, cbmc-gc and HQOT). Here we present very briefly the coding idea of the main functionality used in the [UPGMA](../UPGMA) algorithm for DNA sequences: [Hamming distance](https://en.wikipedia.org/wiki/Hamming_distance).


## ANSI-C code

### Encoding

The DNA is a 4-based sequence (A, C, G, T) and our system only reads binary elements. Thus, the translation is carried our according to the following rule:

- A = 00
- C = 01
- G = 10
- T = 11

### Code

As presented [here](https://newikis.com/en/Hamming_weight), the Hamming distance between two binary sequences A and B is the number of 1 elements in A xor B. Thus, we devide the computation in two functions: popcount(X) (population count, gives the number of 1 elements in X) and XOR. We make use of the code 1 presented below and tailor it to our DNA use-case. 

#### Code 1

```
1   const unsigned int m1  = 0x55555555; //binary: 0101...
2   const unsigned int m2  = 0x33333333; //binary: 00110011..
3   const unsigned int m4  = 0x0f0f0f0f; //binary:  4 zeros,  4 ones ...
4   const unsigned int m8  = 0x00ff00ff; //binary:  8 zeros,  8 ones ...
5   const unsigned int m16 = 0x0000ffff; //binary: 16 zeros, 16 ones ...
6
7   //This is an altered naive implementation, shown for comparison,
8   //and to help in understanding the better functions.
9   //It uses 24 arithmetic operations (shift, add, and, or).
10  int popcount(unsigned int INPUT_B_x) {
11      int x = INPUT_B_x;
12      x = (x & m1 ) + ((x >>  1) & m1 ); //put count of each  2 bits into those  2 bits
13      x = (x & m2 ) + ((x >>  2) & m2 ); //put count of each  4 bits into those  4 bits
14      x = (x & m4 ) + ((x >>  4) & m4 ); //put count of each  8 bits into those  8 bits
15      x = (x & m8 ) + ((x >>  8) & m8 ); //put count of each 16 bits into those 16 bits
16      x = (x & m16) + ((x >> 16) & m16); //put count of each 32 bits into those 32 bits
17      return x;
18  }
```

In order to understand its internal logic, please look into [this](https://stackoverflow.com/questions/15233121/calculating-hamming-weight-in-o1) stack overflow question or the chapter 5 of ["Hacker's Delight"](https://en.wikipedia.org/wiki/Hacker%27s_Delight) by Henry Warren. In summary, we count the number of 1 elements with a divide-and-conquer technique. However, in our DNA use-case, we are only interested in computing the number of 2-bit elements that are different between two sequences. 

#### Example:

Let seq1 = AACT and seq2 = ACCA. Clearly, the Hamming distance between seq1 and seq2 is equal to 2. However, using **Code 1** with our encoding we get:

- encoding(seq1) = bSeq1 = 00 00 01 11 
- encoding(seq2) = bSeq2 = 00 01 01 00

So, bSeq1 xor bSeq2 = 00 01 00 11 and popcount(00 01 00 11) = 3. 

In order to solve this technical issue, we substitute the + (add) operation of line 12 by | (or) (see **code 2**). This way, all the encoded elements (00, 01, 10, 11) have the same distance between them.

#### Code 2

```
1   const unsigned int m1  = 0x55555555; //binary: 0101...
2   const unsigned int m2  = 0x33333333; //binary: 00110011..
3   const unsigned int m4  = 0x0f0f0f0f; //binary:  4 zeros,  4 ones ...
4   const unsigned int m8  = 0x00ff00ff; //binary:  8 zeros,  8 ones ...
5   const unsigned int m16 = 0x0000ffff; //binary: 16 zeros, 16 ones ...
6
7   //This is an altered naive implementation, shown for comparison,
8   //and to help in understanding the better functions.
9   //It uses 24 arithmetic operations (shift, add, and, or).
10  int popcount(unsigned int INPUT_B_x) {
11      int x = INPUT_B_x;
12      x = (x & m1 ) | ((x >>  1) & m1 ); //put count of each  2 bits into those  2 bits
13      x = (x & m2 ) + ((x >>  2) & m2 ); //put count of each  4 bits into those  4 bits
14      x = (x & m4 ) + ((x >>  4) & m4 ); //put count of each  8 bits into those  8 bits
15      x = (x & m8 ) + ((x >>  8) & m8 ); //put count of each 16 bits into those 16 bits
16      x = (x & m16) + ((x >> 16) & m16); //put count of each 32 bits into those 32 bits
17      return x;
18  }
```

The complete Hamming distance function is present in [`main.c`](main.c)


