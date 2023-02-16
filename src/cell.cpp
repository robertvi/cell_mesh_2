#include "cell.h"

#include <iostream>

Cell::Cell(const vec3&_pos)
:pos(_pos)
{
}

void Cell::show()
{
    std::cout << pos << std::endl;

}