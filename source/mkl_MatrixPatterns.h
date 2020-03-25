#ifndef MKL_MATRIXPATTERNS_H_
#define MKL_MATRIXPATTERNS_H_

#include <cstdint>

class mkl_MatrixPatterns
{
private:
    // Set the acii values in the array
    void createData();

public:
    /* 
    * Create a new mkl_Matrix
    * Params :
    */
    explicit mkl_MatrixPatterns();

    //Public Array of patterns used in Led Matrix 
    uint8_t patterns[128][8];
};

#endif //  MKL_MATRIXPATTERNS_H_
