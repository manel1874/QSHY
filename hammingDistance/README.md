In [stringSearch](stringSearch/README.md) we explain the integration of the four building blocks of QSHY (libscapi, mpc-benchmark, cbmc-gc and HQOT). Here we present the main functionality used in the [UPGMA](../UPGMA) algorithm for DNA sequences: [Hamming distance](https://en.wikipedia.org/wiki/Hamming_distance).


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
```


