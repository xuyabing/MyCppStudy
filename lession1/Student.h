//
// Created by xuyabing on 2020-01-10.
//
//在与处理器执行的时候只引入一次头文件

#pragma once


#include <iostream>

#ifndef NDKSTUDY_STUDENT_H
#define NDKSTUDY_STUDENT_H

#endif //NDKSTUDY_STUDENT_H


class Student {
    //结构体默认都是public    class默认都是private
public:
    Student();  //构造函数

    Student(int age,int age2);

    ~Student();

private:
    int age;

protected:
    int age2;
public:
    void setAge(int age) const;
    int getPrivate01();
    friend void updateField(Student *student);
    //友元类，我们是好朋友
    friend class Teacher;

private:        //私有的
    int private01;
};