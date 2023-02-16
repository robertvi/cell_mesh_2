#ifndef __CM2_QVM_CM2_H__
#define __CM2_QVM_CM2_H__

#include <boost/qvm/all.hpp>

//define 3D vector class
typedef boost::qvm::vec<double,3> vec3;

std::ostream& operator<< (std::ostream&,const vec3&);

#endif