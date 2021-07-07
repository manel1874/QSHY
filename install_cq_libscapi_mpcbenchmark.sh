## qlibscapi
cd
git clone https://github.com/manel1874/libscapi.git
mv libscapi qlibscapi
cd qlibscapi
git checkout qdev
make

## libscapi
cd
git clone https://github.com/manel1874/libscapi.git
cd libscapi
git checkout dev
make

# qMPC-Benchmark

cd
git clone https://github.com/manel1874/MPC-Benchmark
mv MPC-Benchmark qMPC-Benchmark
cd qMPC-Benchmark
git checkout dev
cd SemiHonestYao
cmake . && make

# MPC-Benchmark

cd
git clone https://github.com/manel1874/MPC-Benchmark
cd MPC-Benchmark
git checkout dev
cd SemiHonestYao
cmake . && make
