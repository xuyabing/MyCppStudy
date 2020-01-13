//
// Created by xuyabing on 2020/1/11.
//

#ifndef CPPSTUDY_TEMPLATE_H
#define CPPSTUDY_TEMPLATE_H

#endif //CPPSTUDY_TEMPLATE_H

template <class T>
T getMax(T t1,T t2){
    return t1>t2?t1:t2;
}

template <class class1,class class2,class class3>
class TestClass{
public:
    class1 getType(class1 c){
        return c;
    }
    class2 getType(class2 c){
        return c;
    }
    class3 getType(class3 c){
        return c;
    }
};