cmake_minimum_required(VERSION 3.0.0)

set(CELLMESH2_PROJECT_NAME
    CellMesh2
)
set(CELLMESH2_SOURCE_DIR
    src
)
set(CELLMESH2_SOURCE
    ${CELLMESH2_SOURCE_DIR}/main.cpp
)

project(${CELLMESH2_PROJECT_NAME} LANGUAGES CXX)

add_executable(${CELLMESH2_PROJECT_NAME} ${CELLMESH2_SOURCE})
target_link_libraries(${CELLMESH2_PROJECT_NAME} yaml-cpp)
