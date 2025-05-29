#include <iostream>
#include <set> 
#include <string>
#include <queue>
#include "vector.h"
int& ret_ref() {
  int* a = new int(10);
  int& ref = *a;
  return ref;
}
void exmaple() {
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
}
void set_exmaple() {
  std::set<std::string> names;
  names.insert("zhangshoulei");
  names.insert("foobar");
  for (const std::string& name : names) {
    std::cout << name << "\n";
  }
}
void queue_example() {
  std::queue<std::string*> names;
  std::string * line;
  names.push(new std::string("zhangshoulei"));
  names.push(new std::string("foobar"));
  std::string *first = names.front();
  std::cout << *first << "\n";
}
int main() {
  queue_example(); 
  return 0;
}

