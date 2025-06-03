#ifndef MATRIX_H
#define MATRIX_H
#include <vector>
class matrix{
  public:
    matrix(int,int);
    matrix():m(0),n(0),data_(nullptr){}
    matrix(int,int,float);
    matrix(std::vector<std::vector<float>>);
    void transpose();
    int rows() const;
    int cols() const; 
    float& at(size_t,size_t);
    friend std::ostream& operator<<(std::ostream& os,const matrix& mat);
  private:
    int m;
    int n; 
    float* data_;
    bool check_range(size_t,size_t);
};
#endif