//
// Created by xuyabing on 2020/1/11.
//
#ifndef CPPSTUDY_MYEXTENDS_H
#define CPPSTUDY_MYEXTENDS_H

#endif //CPPSTUDY_MYEXTENDS_H

#include <iostream>
using namespace std;
class Person{
private:
    int age;
    char sex;
public:
    char *name="xuyabing";
    int getAge(){
        return this->age;
    }
    void setAge(int age){
        this->age=age;
    }
    void show(){
        cout<<"父类 show run"<<endl;
    }
    void show2(){
        cout<<"父类 show2 run"<<endl;
    }
    void show3(){
        cout<<"父类 show3 run"<<endl;
    }
    virtual void show4(){
        cout<<"父类 show4 run"<<endl;
    }
};
//子类
class Worker: public Person{
public:
    void show(){
        cout<<"子类 show run"<<endl;
    }
    void show2(){
        cout<<"子类 show2 run"<<endl;
    }
    void show3(){
        cout<<"子类 show3 run"<<endl;
    }
    virtual void show4(){
        cout<<"子类 show4 run"<<endl;
    }
};

class Person2{};
class Person3{};
class Person4{};
class Student:public Person,Person2,Person3,Person4{

};