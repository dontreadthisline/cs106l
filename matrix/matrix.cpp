#include "matrix.hpp"
#include <iostream>
#include <exception>
matrix::matrix(int m,int n) {
    if (m <= 0 || n <= 0) {
        throw std::invalid_argument("m & n should be all greater than zero");
    }
    this -> m = m;
    this -> n = n;
    data_ = new float[m*n];
}

matrix::matrix(int m,int n,float c) :matrix(m,n) {
    for (size_t i = 0; i < m*n; i++) {
        data_[i] = c;
    } 
}

matrix::matrix(std::vector<std::vector<float>> vec) 
    :matrix(static_cast<int>(vec.size()),static_cast<int>(vec[0].size())) {
    int m = vec.size();
    if (m <= 0) {
        throw std::invalid_argument("m & n should be all greater than zero");
    }
    int n = vec[0].size();
    if (n <= 0) {
        throw std::invalid_argument("m & n should be all greater than zero");
    }
    for (size_t i = 0; i < m; i++) {
        for (size_t j = 0; j < n; j++) {
            data_[i*n+j] = vec[i][j];
        }
    }
}

int matrix::rows() const {
    return m;
}

int matrix::cols() const {
    return n;
}
bool matrix::check_range(size_t i,size_t j) {
    if (i >= m || j >= n) {
        return false;
    }
    return true;
}
float& matrix::at(size_t i,size_t j) {
    if (!check_range(i,j)) {
        throw std::out_of_range("");
    }
    return data_[i*n+j];
}

void matrix::transpose() {
    return;
}

std::ostream& operator<<(std::ostream& os,const matrix& mat) {
    os << "[";
    for (size_t i = 0; i < mat.m; i++) {
        os << "[";
        for (size_t j = 0; j < mat.n; j++) {
            os << mat.data_[i*mat.n+j];
            if (j != mat.n-1) {
                os << ",";
            }
        }
        os << "]";
        if (i != mat.m-1) {
            os << ",\n";
        }
    }
    os << "]";
    return os;
}