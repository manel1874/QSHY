sudo apt-get update
sudo apt-get install -y git build-essential
sudo apt-get install -y libssl-ocaml-dev libssl-dev
sudo apt-get install -y libgmp3-dev
sudo apt-get install -y g++ gcc libicu-dev
sudo apt-get install -y liblog4cpp5-dev

## Boost library 
wget https://boostorg.jfrog.io/artifactory/main/release/1.71.0/source/boost_1_71_0.tar.bz2
tar -xf boost_1_71_0.tar.bz2
cd boost_1_71_0
sudo ./bootstrap.sh --prefix=/usr/local --with-libraries=all
sudo ./b2 install
sudo /bin/bash -c 'echo "/usr/local/lib" > /etc/ld.so.conf.d/boost.conf'
sudo ldconfig

## cmake 3.16
cd
wget https://cmake.org/files/v3.16/cmake-3.16.0.tar.gz
tar -xf cmake-3.16.0.tar.gz
cd cmake-3.16.0
./bootstrap && make && sudo make install

## Miracl library
cd
mkdir miracl
cd miracl
wget https://github.com/miracl/MIRACL/archive/refs/heads/master.zip
unzip -j -aa -L master.zip
bash linux64
mv miracl.a libmiracl.a
sudo cp ./libmiracl.a /usr/local/lib
