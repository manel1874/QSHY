The UPGMA (**U**nweighted **p**air **g**roup **m**ethod with **a**rithmetic mean) algorithm is an hierarchical clustering method that is commonly used in genetics to create [Phylogenetic Trees](https://en.wikipedia.org/wiki/Phylogenetic_tree) of several DNA sequences.

Check a tutorial on how the UPGMA algorithm works in the following [youtube video](https://www.youtube.com/watch?v=09eD4A_HxVQ).

The system implemented is based on the paper [*Quantum Secure Multiparty Computation of Phylogenetic Trees of SARS-CoV-2 Genome*](link). In our scenario there are three parties (Alice, Bob and Charlie) who want to compute a phylogenetic tree from their COVID DNA sequences. As explained in the above paper, the private version of the UPGMA algorithm is divided in two phases: 

1. Privately compute hamming distance between every sequence (first phase);
2. Iteratively group the genes with the smallest differences between them (second phase).


## Project structure

The project is structured as follows (inside each party):

#### Directories

1. `boolCircuit`: 
	
	- `mainScapi.txt`: `.txt` file describing the boolean circuit of the Hamming distance functionality (as presented in [hammingDistance](../hammingDistance) folder). 

2. `include`:

	- `guide_ tree.hpp`: header file of the second phase of UPGMA;
	- `HamParties.hpp`: header file of the first (private) phase of UPGMA. 
	– `matrixDist.hpp`: header file to build the matrix distance.

3. `inputFiles`: Input files with the following name structure `Party_ i_ seq_ j.txt` for party number i ≤ 3 and sequence j. Note that the strucutre of the input elements in this file should be as explained in [hammingDistance](../hammingDistance) section.

4. `partiesFiles`: one file with the ip numbers and ports of all the three parties. After the application is run it is created one file for each pair of parties. File name structure created: `Parties_i_j`, where i and j are the parties’ ids.

5. `phylogeneticTree`: empty folder where the final phylogenetic tree is saved with .nwk extension.

6. `quantum_oblivious_key_distribution`: emulator to generate oblivious keys to be used with the oblivious transfer functionality.

7. `results`: empty folder where the Hamming distances between sequences are saved. There are two name structures:

	– `out_ myseq_ i_ otherparty_ j_ otherseq_ k.txt`: where i denotes the current party’s sequence number, j denotes the other party id and k the other party’s sequence number. All the Hamming Distances between the current party and other parties have this structure (computed during QSMC phase and internal phase).
	– `out_ party_ l_ seq_ i_ otherparty_ j_ otherseq_ k.txt`: which saves the Hamming distance between party l ith sequence and party j kth sequence. This structure is used to save the hamming distances that are not related with the current party’s sequences (distributed during the QKD phase).

8. `src`:
	
	– `guide_ tree.cpp`: source file of the second phase of UPGAM.
	– `HamParties.cpp`: source file of the first (private) phase of UPGAM.
	– `matrixDist.cpp`: source file to build the matrix distance from the computed hamming distances.

9. `yaoConfigFiles`: before the application is run the folder is empty. After it is run it is created one configFile for each input sequence. These files contain the information of the paths to the boolean circuit and input elements.

10. `templates`: the tamplates used for the web application built in Flask.

#### Application




