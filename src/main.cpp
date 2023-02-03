#include <iostream>
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

    return 0;    
}
