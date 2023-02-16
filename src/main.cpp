#include "cell.h"

#include <iostream>
#include <boost/qvm/all.hpp>
#include <yaml-cpp/yaml.h>

int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        std::cerr << "usage: CellMesh2 <path-to-config-yaml>" << std::endl;
        exit(1);
    }

    //load yaml config
    YAML::Node config = YAML::LoadFile(argv[1]);

    std::cout << "main" << std::endl;

    std::cout << config << std::endl;

    Cell c({1,2,4});
    c.show();

    return 0;    
}
