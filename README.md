# cell_mesh_2
A 3D model of cells growing

## Build instructions
Dependencies:
- developed and tested on linux
- git
- cmake
- yaml-cpp (0.6.2)
- boost (1.71)
- includes a copy of doctest.h [Copyright](https://github.com/doctest/doctest/blob/master/LICENSE.txt) (c) 2016-2021 Viktor Kirilov 

Build instructions:
```
git clone https://github.com/robertvi/cell_mesh_2.git
cd cell_mesh_2
mkdir build
cd build
cmake ..
make -j
./CellMesh2 --doctest
./CellMesh2 ../examples/config.yaml
```

## ChangeLog
2023-02-16
- Stub Cell class using a boost::qvm vector as a placeholder variable
- Incorporated doctest as a testing framework

2023-02-03
- Created repo on github with MIT licence
- Cloned to local machine with `git clone git@github.com:robertvi/cell_mesh_2.git`
- Following https://github.com/Jamagas/CMake and https://medium.com/swlh/c-project-structure-for-cmake-67d60135f6f5 for project structure
- Creating stubs for cmake project
- Stub main parses yaml config using yaml-cpp
- Included boost qvm
