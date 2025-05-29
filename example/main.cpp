#include <iostream>
#include "vector.h"
int& ret_ref() {
  int* a = new int(10);
  int& ref = *a;
  return ref;
}
int main() {
  vector<int> v;
  print_vector(v);
  for (int i = 0; i < 5; i++) {
    v.push_back(i);
  }
  print_vector(v);
  vector<int> v1(5,0);
  print_vector(v1);
  for (size_t i = 0; i < v1.size(); i++) {
    v1[i] = int(i+5);
  }
  print_vector(v1);
  for (size_t i = 0; i < 10; i++) {
    try {
      std::cout << v1.at(i) << "\n";
    } catch(const std::out_of_range& e) {
      std::cout << "out of range index " << i << "\n";
    }
  }
  while(!v1.empty()) {
    int& item  = v1.pop_back();//这里没有发生值copy
    std::cout << item << " " ;
  }
  std::cout << "\n";
  std::cout << v1.size() << "\n";
  return 0;
}

