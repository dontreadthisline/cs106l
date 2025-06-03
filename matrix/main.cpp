#include <iostream>
#include <vector>
#include "matrix.hpp"
int main() {
    int m = 2;
    int n = 3;
    matrix mat;
    std::cout << mat << "\n";
    matrix mat1(m,n,1);
    std::cout << mat1 << "\n";
    std::vector<std::vector<float>>  vecs{
        {1,2,3},
        {4,5,6},
    };
    matrix mat2(vecs);
    std::cout << mat2 << "\n";
    std::cout << mat2.at(1,1) << "\n";
    return 0;
}