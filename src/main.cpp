#include "cell.h"
#include "openmp.h"

#include <iostream>
#include <string>
#include <boost/qvm/all.hpp>
#include <yaml-cpp/yaml.h>

#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest.h"

using namespace std;

int main(int argc, char *argv[])
{
    if(argc > 1)
    {
        if(string(argv[1]) == "--doctest")
        {
            //https://github.com/doctest/doctest/blob/master/examples/installed_doctest_cmake/executable/main.cpp
            doctest::Context context;
            context.applyCommandLine(argc, argv);
            return context.run();
        }
    }

    if(argc != 2)
    {
        std::cerr << "usage: CellMesh2 <path-to-config-yaml>" << std::endl;
        exit(1);
    }

    //load yaml config
    YAML::Node config = YAML::LoadFile(argv[1]);

    Cell c;
    c.setBasicCell({1.2,2.3,4.5},0.5);
    c.setMetabolism(123,345,567);
    //c.show();

    //test_openmp(config["num_steps"].as<uint64_t>(),config["num_threads"].as<int>());

    return 0;
}
