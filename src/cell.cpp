#include "cell.h"

#include <iostream>

#include "doctest.h"

TEST_CASE("Cell source file")
{
    CHECK(1 == 1);
}

BasicCell::BasicCell()
{
}

BasicCell::~BasicCell()
{
}

void BasicCell::setBasicCell(const vec3&_pos,const real&_rad)
{
    pos = _pos;
    rad = _rad;
}

void BasicCell::show()
{
    std::cout << "BasicCell" << std::endl;
    std::cout << "pos=" << pos << std::endl;
    std::cout << "rad=" << rad << std::endl;
}

Metabolism::Metabolism()
{}

Metabolism::~Metabolism()
{}

void Metabolism::setMetabolism(const uint64_t&_dimer,const uint64_t&_trimer,const uint64_t&_store)
{
    dimer = _dimer;
    trimer = _trimer;
    store = _store;
}

void Metabolism::show()
{
    std::cout << "Metabolism" << std::endl;
    std::cout << "dimer=" << dimer << std::endl;
    std::cout << "trimer=" << trimer << std::endl;
    std::cout << "storage=" << store << std::endl;
}

Cell::Cell()
{
}

Cell::~Cell()
{
}

void Cell::show()
{
    BasicCell::show();
    Metabolism::show();
}