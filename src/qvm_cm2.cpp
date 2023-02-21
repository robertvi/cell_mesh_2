#include "qvm_cm2.h"

#include "doctest.h"

using namespace boost::qvm;
using namespace std;

ostream& operator<< (ostream&o,const vec3&v)
{
    o << "(" << X(v) << "," << Y(v) << "," << Z(v) << ")";
    return o;
}