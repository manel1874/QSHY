Start from running the following:

```
$ sudo apt-get update
$ sudo apt-get install -y git build-essential
$ sudo apt-get install -y libssl-ocaml-dev libssl-dev
$ sudo apt-get install -y libgmp3-dev
$ sudo apt-get install -y g++ gcc libicu-dev
$ sudo apt-get install -y liblog4cpp5-dev
```

Download *boost_1_71_0.tar.bz2* from [boost website](https://www.boost.org/users/history/version_1_71_0.html) to the Home directory. Then run the following commands:

```
 $ tar -bzip2 -xf boost_1_71_0.tar.bz2
 $ cd boost_1_71_0
```

Run the script which prepares Boost's build process:
```
$ sudo ./bootstrap.sh --prefix=/usr/local --with-libraries=all
```

Compile the project:
```
$ sudo ./b2 install
```

Add the Boost libraries path to the default Ubuntu library search path:
```
$ sudo /bin/bash -c 'echo "/usr/local/lib" > /etc/ld.so.conf.d/boost.conf'
```

Update the default Ubuntu library search paths
```
$ sudo ldconfig
```

Clone to the Home directory and make LibScapi library:
```
$ cd ~
$ git clone https://github.com/manel1874/libscapi.git
$ cd libscapi
```
Install qdev version, otherwise MPC-Benchmark does not work and gives the following [issue](https://github.com/cryptobiu/MPC-Benchmark/issues/6).
```
$ git checkout qdev
```

Make sure you have installed cmake version 3.16. In order to do so please [go here](https://cmake.org/files/v3.16/), choose cmake-3.16.0.tar.gz and follow the instructions on the README file. After that, run:
```
$ make
```

#### Some remarks:

- We are downloading a forked repo form the [original cryptobiu](https://github.com/cryptobiu/libscapi) because this fork has integrated the HQOT protocol along with OTExtension. For more info please check manel1874/libscapi README.md file in qdev branch.

