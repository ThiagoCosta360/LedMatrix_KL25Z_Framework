#ifndef MKL_MATRIXPATTERNS_H_
#define MKL_MATRIXPATTERNS_H_

#include <cstdint>

class mkl_MatrixPatterns
{
private:
    void createData();

public:
    explicit mkl_MatrixPatterns();

    uint8_t patterns[128][8];
};

#endif //  MKL_MATRIXPATTERNS_H_
