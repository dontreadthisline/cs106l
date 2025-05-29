#ifndef CLASS_H
#define CLASS_H
#include <string>
#include <vector>
/*
class matrix{
  public:
    matrix(int,int);
    matrix(){}
    matrix(int,int,float);
    void transpose();
    void from_vector(std::vector<std::vector<float>>);
    int rows() const;
    int cols() const; 
    float& at(int,int);
  private:
    int m;
    int n; 
    float data_;
};
*/
class student {
    public:
      student(){}
      student(std::string name ,int id);
      std::string get_name() const;
      int get_id() const;
      void set_name(std::string& );
      void set_id(int);
    private:
      std::string name_;
      int id_;
      void foo();
};
#endif