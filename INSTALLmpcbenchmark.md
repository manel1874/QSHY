After installing libscapi library we have to install MPC-Benchmark library in the Home directory. This library uses libscapi cryptographic primitives to implement several Secure Multi-Party protocolos, including Yao protocol.

### MIRACL library:

Download the MIRACL.ZIP file from its [repo here](https://github.com/miracl/MIRACL) and save it into an otherwise empty "miracl" folder.

Unzip the MIRACL.ZIP file using the unix utility unzip:	
```
$ unzip -j -aa -L miracl.zip
```
	
Perform a tailored build of the MIRACL library by opening a terminal window and typing:
```
$ bash linux64
```
	
Rename miracl.a to libmiracl.a and copy to /usr/local/lib:
```
sudo cp ./libmiracl.a /usr/local/lib
```
	
### MPC-Benchmark

Download MPC-Benchmark to the Home directory:
```
$ cd ~
$ git clone https://github.com/manel1874/MPC-Benchmark
```

If you are istalling "3. MPC-Benchmark": Change to dev branch:
```
$ cd MPC-Benchmark
$ git checkout dev
```

If you are istalling "4. qMPC-Benchmark": Change to qdev branch:
```
$ cd MPC-Benchmark
$ git checkout qdev
```


Install Semi-Honest Yao Protocol:
```
$ cd $~/MPC-Benchmark/SemiHonestYao
$ cmake . \&\& make
```

#### Some remarks:

- We are downloading a forked repo form the [original cryptobiu](https://github.com/cryptobiu/MPC-Benchamrk). For more info please check [manel1874/MPC-Benchmark README.md file](https://github.com/manel1874/MPC-Benchmark/tree/qdev) in qdev branch.

**TODO:** Check that master branch works.

