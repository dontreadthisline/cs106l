#ifndef VECTOR_H 
#define VECTOR_H
#include <cstddef>
#include <initializer_list>
template <typename T> 
class vector {
public:
    // 默认构造函数
    vector() : elements_(nullptr), cap_(0), size_(0) {}
    vector(size_t n, const T& value = T());
    vector(size_t n);
    vector(std::initializer_list<T> init);
    void push_back(const T &v);
    T& pop_back();
    size_t size() const;//代表是只读函数 
    bool empty() const /*代表只读函数*/ {return size_ == 0;}
    T& operator[](size_t index) const; //代表是只读函数
    T& at(size_t index) const; //只读函数
    void insert(size_t idx,T& value); //todo 
    void clear();
private:
     T* elements_;
     int cap_;
     size_t size_;
};

template <typename T> 
void vector<T>::push_back(const T &v) {
    //如果当前容量不够了,那么就扩容到原来的两倍
    if (size_ >= cap_) {
        cap_ = (cap_ == 0) ? 1 : cap_ * 2;
        T* new_elements = new T[cap_];
        //std::copy(elements_, elements_ + size_, new_elements); 
        for (size_t i = 0; i < size_; i++) {
            new_elements[i] = elements_[i];
        }    
        delete[] elements_;//先释放原来的内存
        elements_ = new_elements;
    }
    elements_[size_] = v; 
    size_++;
    return;
}

template <typename T> 
size_t vector<T>::size() const {
    return size_;
}
template <typename T> 
//运算符的重载
T& vector<T>::operator[](size_t index) const  {
    return elements_[index];
}
template <typename T> 
T& vector<T>::at(size_t index) const {
    if (index < size_) {
        return elements_[index];
    } else {
        throw std::out_of_range("index out of range");
    }
}
// 带初始大小的构造函数
template <typename T> 
vector<T>::vector(size_t n, const T& value ) {
    size_ = cap_ = n;
    elements_ = new T[cap_];
    for (size_t i = 0; i < n; ++i) {
        elements_[i] = value;
    }
}
template <typename T> 
vector<T>::vector(size_t n) {
    size_ = cap_ = n;
    elements_ = new T[cap_];
}
// 初始化列表构造函数
template <typename T> 
vector<T>::vector(std::initializer_list<T> init) {
    size_ = cap_ = init.size();
    elements_ = new T[cap_];
    size_t i = 0;
    for (const auto& val : init) {
        elements_[i++] = val;
    }
}
template <typename T> 
void vector<T>::clear() {
    delete[] elements_;
    elements_ = nullptr;
}
template <typename T> 
T& vector<T>::pop_back() {
    if (size_ <= 0) {
        throw std::out_of_range("");
    }
    T& item = elements_[size_-1];
    size_-=1;
    return item;
}
//放到这里应该不合理
template <typename T>
void print_vector(const vector<T> &v) {
  std::cout<<"vec{";
  for (size_t i = 0; i < v.size(); i++) {
    std::cout << v[i];
    if (i != v.size() -1) {
      std::cout << ",";
    }
  }
  std::cout << "}\n";
}
#endif