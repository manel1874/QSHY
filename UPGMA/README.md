The UPGMA (**U**nweighted **p**air **g**roup **m**ethod with **a**rithmetic mean) algorithm is an hierarchical clustering method that is commonly used in genetics to create [Phylogenetic Trees](https://en.wikipedia.org/wiki/Phylogenetic_tree) of several DNA sequences.

Check a tutorial on how the UPGMA algorithm works in the following [youtube video](https://www.youtube.com/watch?v=09eD4A_HxVQ).

The system implemented is based on the paper [*Quantum Secure Multiparty Computation of Phylogenetic Trees of SARS-CoV-2 Genome*](link). In our scenario there are three parties (Alice, Bob and Charlie) who want to compute a phylogenetic tree from their COVID DNA sequences. 


## Project structure

The project is structered as follows (inside each party):

1. `boolCircuit`: 
	
	- `mainScapi.txt`: `.txt` file describing the boolean circuit of the Hamming distance functionality (as presented in [hammingDistance](../hammingDistance) folder). 

2. `include`:
