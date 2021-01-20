Here we will explain how to integrate the already installed tools (libscapi, mpc-benchmark and cbmc-gc) in order to execute a secure computation of the string search functionality. This functionality is briefly explained in [stringSearchFunctionality.pdf](stringSearchFunctionality.pdf) along with some examples. A video tutorial on this use-case is given below:

[![Alt text](https://img.youtube.com/vi/VID/0.jpg)](https://www.youtube.com/watch?v=VID)

The flow of the final program is described in the following picture:

![workFlow](workFlow.png)

## CBMC-GC circuit generation

1. Write an ANSI-C program with the desired functionality to be computed and save it as `main.c`. The input values of the functionality are identified by the following prefix: `INPUT_`. Please check the .pdf `cbmc-gc-v0.9.3\_upd1.pdf` in [forsye](https://forsyte.at/software/cbmc-gc/) webpage for more syntax specifications. Also, check the [cbmc-gc repo example section](https://gitlab.com/securityengineering/CBMC-GC-2/-/tree/master/examples) and [`cbmc-gc-v0.9.3.tar.gz`](https://forsyte.at/software/cbmc-gc/) for more examples.

2. Run the the shell fil `generateCirc.sh`:
```
$ ./generateCirc.sh
```

### generateCirci.sh file

Let us break down the file `generateCirci.sh` used to generate the Boolean Circuit description of `main.c` functionality:

1. After writing the desired `main.c` program we run the following commands in order to generate a boolean circuit in the Bristol format using CBMC-GC tool:
```
$ ~/CBMC-GC-2/bin/cbmc-gc --minimization-time-limit 30 --function mpc\_main main.c
$ ~/CBMC-GC-2/bin/circuit-utils --as-bristol mainBristol.txt
```

The flag `--function` points to `mpc_main` function which, in our example, is the main program of the C program (`main.c`). Basically, this flag tells the compiler the function from which it should extract the output of the generated boolean circuit.

2. Use libscapi to translate Boolean circuits from Bristol format to Scapi format:
```
$ cp mainBristol.txt ~/libscapi/tools/circuits/scapiBristolConverter
$ ~/libscapi/tools/circuits/scapiBristolConverter/scapiBristolConverter bristol\_to\_scapi mainBristol.txt mainScapi.txt 2 true
```

*Important note*: the converter scapiBristolConverter was manually altered because the output was not tailored to be used with Semi-Honest Yao protocol (only in manel1874 github repo).


## MPC-Benchmark Semi-honest Yao












