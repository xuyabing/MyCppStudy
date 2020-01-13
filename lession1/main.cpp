#include <iostream>
#include "Student.h"
#include "Teacher.h"
#include "MyInstance.h"
#include <stdint.h>
using namespace std;

void updateField(Student *student){
    student->private01=99;
}

// todo 操作符重载
class Operator{
public:
    int count;
    int64_t count2;
public:
    Operator operator + (const Operator& ttttt){
        Operator temp;
        temp.count=this->count+ttttt.count;
        return temp;
    }
};

void * operator new(size_t t){      //重载new运算符，测试发现不能在类中重载该关键字
    cout<<"谁又new，size大小为"<<t<<endl;
    return malloc(t);
}

void operator delete(void *p){
    cout<<"谁delete了，内存地址是："<<p<<endl;
}
int main() {
//    Student student;
    Student *student=new Student();
    updateField(student);       //友元函数
    cout<<student->getPrivate01()<<endl;
    Teacher teacher;
    teacher.update(student);    //友元类
    cout<<student->getPrivate01()<<endl;
    delete student;
    cout<<"######################"<<endl;
    MyInstance *myInstance=MyInstance::getInstance();
    myInstance->show();
    myInstance->unInstance();       //单例模式   释放

    Operator anOperator1,anOperator2,anOperator3;
    anOperator1.count=10000;
    anOperator2.count=20000;
    anOperator3=anOperator1 + anOperator2;
    cout<<"anOperator3值为:"<<anOperator3.count<<endl;


    return 0;
}
