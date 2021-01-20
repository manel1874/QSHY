Here we will explain how to integrate the already installed tools (libscapi, mpc-benchmark and cbmc-gc) in order to execute a secure computation of the string search functionality. This functionality is briefly explained in [stringSearchFunctionality.pdf](stringSearchFunctionality.pdf) along with some examples. 

The flow of the final program is described in the picture below

![workFlow](workFlow.png)

We start from writing a ANSI-C program with the desired functionality to be computed and save it as `main.c`. The input values of the functionality are identified by the following prefix: `INPUT_`. Please check the .pdf `cbmc-gc-v0.9.3\_upd1.pdf` in [forsye](https://forsyte.at/software/cbmc-gc/) webpage for more syntax specifications. Also, check the [cbmc-gc repo example section](https://gitlab.com/securityengineering/CBMC-GC-2/-/tree/master/examples) and [`cbmc-gc-v0.9.3.tar.gz`](https://forsyte.at/software/cbmc-gc/) for more examples.

After writing the desired \code{main.c} program we run the following command in order to generate a boolean circuit in the Bristol format using CBMC-GC tool:
