#include "class.h"
student::student(std::string name,int id) {
    name_ = name;
    id_ = id;
}

std::string student::get_name() const {
    return name_;
}

int student::get_id() const {
    return id_;
}

void student::set_name(std::string& name) {
    name_ = name;
}

void student::set_id(int id) {
    id_ = id;
}
void student::foo() {
    return;
}