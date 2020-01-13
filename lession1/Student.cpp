//
// Created by xuyabing on 2020-01-10.
//

#include "Student.h"
#include <iostream>
using namespace std;


Student::Student() {
    cout<<"无参构造方法"<<endl;
}

Student::Student(int age, int age2) {
    this->age=age;
    this->age2=age2;
    cout<<"有参构造方法"<<endl;
}

Student::~Student() {
    cout<<"析构方法"<<endl;
}

void Student::setAge(int age) const {
//    this->age=age;       //常量函数不能修改类中的成员
}

int Student::getPrivate01() {
    return this->private01;
}
//void updateField(Student *student) {
//    student->private01=99;
//}