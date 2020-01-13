//
// Created by xuyabing on 2020/1/11.
//
#include <iostream>
#include <string>
#include <vector>   //容器
#include <map>
using namespace std;

vector<string> allName;
void test01(){
    allName.push_back("111");
    allName.push_back("222");
    allName.push_back("333");
    allName.clear();
    vector<string> tempVector;      //定义临时容器目的，就是为了替换全局变量
    tempVector.swap(allName);      //把全局的移动给临时，等于方法弹栈，把全局的内存回收
}

int main(){
    cout<<"#####################"<<endl;
    //c++中容器  分为两种类型
    //1.序列式容器：元素的排序关系，和元素本身没有任何关系，是我们添加的时候导致的顺序
    vector<int> vec01(1);       //申明一个元素的空间
    vector<string> vec02(99,"xuyabing");        //声明99个xuyabing的元素空间
    vector<string> vec03;
    vec03.push_back("AAAAAAA");
    vec03.push_back("BBBBBBB");
    vec03.push_back("CCCCCCC");
    vec03.pop_back();
    cout<<vec03.at(1)<<endl;
    vec03.clear();
    if (vec03.empty()){
        cout<<"元素被清空"<<endl;
    } else{
        cout<<"元素没有被清空"<<endl;
    }
    //2.关联式容器：根据标识，决定添加或者获取  map  set

    return 0;
}