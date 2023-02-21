#include "openmp.h"

#include <iostream>
#include <iomanip>
#include <omp.h>

void test_openmp(uint64_t num_steps,int num_threads)
{
    uint64_t i;
    double step,pi,sum=0.0;

    step = 1.0 / double(num_steps);

    omp_set_num_threads(num_threads);
    #pragma omp parallel for reduction (+:sum)
    for(i=0; i<num_steps; i++)
    {
        double x = (i + 0.5)*step;
        sum += 4.0/(1.0 + x*x);
    }

    pi = step * sum;
    std::cout << "pi=";
    std::cout << std::setprecision(15) << pi << std::endl;
    std::cout << "   3.141592653589793238462643383279502884197" << std::endl;
}