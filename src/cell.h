#ifndef __CM2_CELL_H__
#define __CM2_CELL_H__

#include "qvm_cm2.h"

class Cell
{
    public:
        Cell(const vec3&);
        void show();
    private:
        vec3 pos;
};

#endif