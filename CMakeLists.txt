cmake_minimum_required(VERSION 3.0.0)

set(CELLMESH2_PROJECT_NAME
    CellMesh2
)
set(CELLMESH2_SOURCE_DIR
    src
)
set(CELLMESH2_SOURCE
    ${CELLMESH2_SOURCE_DIR}/main.cpp
    ${CELLMESH2_SOURCE_DIR}/cell.cpp
    ${CELLMESH2_SOURCE_DIR}/qvm_cm2.cpp
    ${CELLMESH2_SOURCE_DIR}/openmp.cpp
)

project(${CELLMESH2_PROJECT_NAME} LANGUAGES CXX)

add_executable(${CELLMESH2_PROJECT_NAME} ${CELLMESH2_SOURCE})
target_link_libraries(${CELLMESH2_PROJECT_NAME} yaml-cpp)


find_package(OpenMP)
if (OPENMP_FOUND)
    set (CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${OpenMP_C_FLAGS}")
    set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${OpenMP_CXX_FLAGS}")
    set (CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} ${OpenMP_EXE_LINKER_FLAGS}")
endif()


#find_package(OpenMP)
#if(OpenMP_CXX_FOUND)
#    target_link_libraries(${CELLMESH2_PROJECT_NAME} PUBLIC OpenMP::OpenMP_CXX)
#endif()