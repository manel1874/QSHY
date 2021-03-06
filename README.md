# QSHY

QSHY stands for **Q**uantum **S**emi **H**onest **Y**ao and this repository implements a Semi-honest Yao protocol assisted with Quantum Oblivious Keys. This system has four building blocks:

* [libscapi](https://github.com/cryptobiu/libscapi): implements the basic cryptographic primitives and also the communication channels.
* [MPC-Benchmark](https://github.com/cryptobiu/MPC-Benchmark): implements Yao protocol based on the libscapi library.
* [CBMC-GC](https://gitlab.com/securityengineering/CBMC-GC-2.git): translates ANSI-C programs into boolean circuits.
* HQOT: Hybrid Quantum Oblivious Transfer based on Quantum Oblivious Key Distribution presented in the paper: [*Generation and Distribution of Quantum Oblivious Keys for Secure Multiparty Computation*](https://www.mdpi.com/2076-3417/10/12/4080). In order to better understand the integration of HQOT protocol in both libscapi and MPC-Benchmark, please read this [README file](https://github.com/manel1874/libscapi/blob/qdev/lib/OTExtensionBristol/quantum_random_oblivious_transfer/README.md).

The main goal of the repository is to offer a framework to develop Secure Multiparty Computation (SMC) protocols based on quantum technologies.


## Installation

**TODO:** The installation process is still a bit tedious and has to be automated.

QSHY runs on Linux (x64 only, 32 bit systems are not supported) and has been tested on the following version:
- Ubuntu 16.04/18.04 LTS

In order to install this repository you will need to install the building blocks mentioned before. Install in the following order:

1. libscapi: read [INSTALLlibscapi.md](INSTALLlibscapi.md)
2. MPC-Benchmark: read [INSTALLmpcbenchmark.md](INSTALLmpcbenchmark.md)
3. CBMC-GC: read [INSTALLcbmcgc.md](INSTALLcbmcgc.md)

## Usage

Currently, there are (only) three functionalities implemented: 

1. String search problem;
2. Hamming distance;
3. UPGMA algorithm to compute Phylogenetic Trees, developed under the [QuantumMining](http://quantummining.av.it.pt/) and [QuGENOME](http://qugenome.av.it.pt/) projects.

Start from reading the String search problem implementation in the corresponding [readme](stringSearch/README.md) file. It explains the integration of the above four building blocks. Then, look into [hamming distance](hammingDistance/README.md) in order to understand the basic funcionality used extensively in the UPGMA algorithm.
