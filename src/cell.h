#ifndef __CM2_CELL_H__
#define __CM2_CELL_H__

#include "qvm_cm2.h"

#include <cstdint>

/*
 *  basic 3D cell with position and radius
 */
class BasicCell
{
    public:
        BasicCell();
        virtual ~BasicCell();
        virtual void show();
        void setBasicCell(const vec3&,const real&);
    private:
        vec3 pos; //position
        real rad; //radius
};

/*
 *  cell metabolism model
 */
class Metabolism
{
    public:
        Metabolism();
        virtual ~Metabolism();
        virtual void show();
        void setMetabolism(const uint64_t&,const uint64_t&,const uint64_t&);
    private:
        uint64_t dimer;   //number of dimers in the cytoplasm
        uint64_t trimer;  //number of trimers in the cytoplasm
        uint64_t store;   //number of monomers in the storage organelle
};

/*
 *  the actual Cell class that you instantiate
 *  inheriting/containing all the required classes
 */
class Cell
:public BasicCell, public Metabolism
{
    public:
        Cell();
        ~Cell();
        void show();
};

#endif