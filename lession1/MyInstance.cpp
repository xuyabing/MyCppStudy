//
// Created by xuyabing on 2020/1/11.
//

#include "MyInstance.h"

using namespace std;
MyInstance * MyInstance::myInstance=NULL;

MyInstance::MyInstance() {
    cout<<"我是无参构造"<<endl;
}

MyInstance * MyInstance::getInstance() {
    //c++ 11标准之后，内部保证，所有static成员变量，线安全问题，内部已经处理好了
    if(!myInstance){
        myInstance=new MyInstance();
    }
    return myInstance;
}

MyInstance::~MyInstance() {
    cout<<"单例模式被释放"<<endl;
}

void MyInstance::show() {
    cout<<"show run...."<<endl;
}

void MyInstance::show2() {
    cout<<"show2 run...."<<endl;
}

void MyInstance::unInstance() {
    if(myInstance!=NULL){
        delete myInstance;
        myInstance=NULL;
    }
}