#ifndef __CM2_CELL_H__
#define __CM2_CELL_H__

#include "qvm_cm2.h"

/*
basic 3D cell with position and radius
*/
class BasicCell
{
    public:
        BasicCell(const vec3&,const real&);
        virtual ~BasicCell();
        virtual void show();
    private:
        vec3 pos;
        real rad;
};

/*
the actual Cell class that you instantiate
inheriting/containing all the required classes
*/
class Cell: public BasicCell
{
    public:
        Cell(const vec3&,const real&);
        ~Cell();
        void show();
};

#endif