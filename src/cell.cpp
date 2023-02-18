#include "cell.h"

#include <iostream>

#include "doctest.h"

BasicCell::BasicCell(const vec3&_pos,const real&_rad)
:pos(_pos),rad(_rad)
{
    std::cout << "BasicCell" << std::endl;
}

BasicCell::~BasicCell()
{
    std::cout << "~BasicCell" << std::endl;
}

void BasicCell::show()
{
    std::cout << "pos=" << pos << std::endl;
    std::cout << "rad=" << rad << std::endl;
}

TEST_CASE("testing Cell source file")
{
    CHECK(1 == 1);
}

Cell::Cell(const vec3&_pos,const real&_rad)
:BasicCell(_pos,_rad)
{
    std::cout << "Cell" << std::endl;
}

Cell::~Cell()
{
    std::cout << "~Cell" << std::endl;
}

void Cell::show()
{
    BasicCell::show();
}