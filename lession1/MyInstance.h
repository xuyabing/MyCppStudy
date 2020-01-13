//
// Created by xuyabing on 2020/1/11.
//

#ifndef CPPSTUDY_MYINSTANCE_H
#define CPPSTUDY_MYINSTANCE_H

#endif //CPPSTUDY_MYINSTANCE_H

#include <iostream>

class MyInstance{
private:
    static MyInstance *myInstance;
    MyInstance();
    ~MyInstance();
public:
    static MyInstance *getInstance();

    void show();

    void show2();

    void unInstance();
};