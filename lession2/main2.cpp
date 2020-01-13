//
// Created by xuyabing on 2020/1/11.
//
#include <iostream>
#include "MyExtends.h"
#include "Template.h"

void exceptMethod(){
    throw "我报废了";
}
void exceptMethod2(){
    throw exception();
}

int main(){
    Worker worker;
    worker.setAge(13);
    cout<<"name:"<<worker.name<<endl;
    cout<<"age:"<<worker.getAge()<<endl;
    worker.show();
    cout<<"############################"<<endl;
    Person *person=new Worker;      //静态多态，是在编译器，编译的时候只看左边是谁
    person->show();
    delete person;
    cout<<"############################"<<endl;
    Person *person1=new Worker;      //动态多态，是在运行期，运行的时候去查看父类的方法是否定义了虚函数，有虚函数就调用虚函数的重写函数
    person1->show4();
    delete person1;
    cout<<"############################"<<endl;
    cout<<getMax(10,20)<<endl;
    TestClass<int,string,double> testClass;
    cout<<testClass.getType(1)<<endl;
    cout<<"############################"<<endl;
    const char* c1="#x321973911937";
    char *c2= const_cast<char*>(c1);
    cout<<c2<<endl;
    char *c3="#x739172391";
    const char *c4= const_cast<const char *>(c3);
    cout<<c4<<endl;
    cout<<"############################"<<endl;

    Person *person2=new Person;
    Worker *worker1= static_cast<Worker *>(person2);    //静态类型转换
    worker1->show();        //被转换过来，调用子类的方法
    delete person2;  //回收的规则一定是谁new 谁delete

    cout<<"############################"<<endl;
    Person *person3=new Person;
    Worker *worker2=dynamic_cast<Worker*>(person3);     //动态转换后会返回一个值，这个值就是转换后的值
    if (worker2){
        cout<<"转换成功"<<endl;
        worker2->show();
    } else{
        cout<<"转换失败"<<endl;
    }
    cout<<"############################"<<endl;
    try {
        exceptMethod();
    }catch(const char* &e) {
        cout<<e<<endl;
    }
    try {
        exceptMethod2();
    }catch(exception &e){
        cout<<e.what()<<endl;
    }

    return 0;
}