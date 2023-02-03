# cell_mesh_2
A 3D model of cells growing

## Build instructions
Dependencies:
- developed and tested on linux
- git
- cmake
- yaml-cpp (v0.6.2 of ubuntu libyaml-cpp-dev and libyaml-cpp0.6 packages used during development)

```
git clone https://github.com/robertvi/cell_mesh_2.git
cd cell_mesh_2
mkdir build
cd build
cmake ..
make
./CellMesh2 ../examples/config.yaml
```

## ChangeLog
2023-02-03
- Created repo on github with MIT licence
- Cloned to local machine with `git clone git@github.com:robertvi/cell_mesh_2.git`
- Following https://github.com/Jamagas/CMake and https://medium.com/swlh/c-project-structure-for-cmake-67d60135f6f5 for project structure
- Creating stubs for cmake project

