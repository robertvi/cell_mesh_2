#include "cell.h"

#include <iostream>

#include "doctest.h"

Cell::Cell(const vec3&_pos)
:pos(_pos)
{
}

void Cell::show()
{
    std::cout << pos << std::endl;

}

TEST_CASE("testing Cell source file")
{
    CHECK(1 == 1);
}
