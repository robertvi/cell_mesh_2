#ifndef __CM2_QVM_CM2_H__
#define __CM2_QVM_CM2_H__

#include <boost/qvm/all.hpp>

//define floating point datatype
typedef double real;

//define 3D vector class
typedef boost::qvm::vec<real,3> vec3;

std::ostream& operator<< (std::ostream&,const vec3&);

#endif