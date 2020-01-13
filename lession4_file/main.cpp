//
// Created by xuyabing on 2020/1/11.
//
#include <fstream>
#include <stdio.h>
#include <zconf.h>
#include <iostream>
using namespace std;
int main(){
//    const int MAXPATH=250;
//    char buffer[MAXPATH];                 //获取当前工作路径
//    getcwd(buffer, MAXPATH);
//    printf("The current directory is: %s", buffer);
    //c方式读写文件
    FILE* file=fopen("/Users/xuyabing/Develop/C++/cppStudy/文件1.txt","w");
    fprintf(file,"今天周六，%d日不出门",11);
    fprintf(file,"大武汉登记卡回单卡很大\n");
    fclose(file);
    FILE* file2=fopen("/Users/xuyabing/Develop/C++/cppStudy/文件1.txt","r");
    char buffer2[1024];
    while (!feof(file2)){
        fscanf(file2,"%s",buffer2);
        cout<<"循环读取内容是:"<<buffer2<<endl;
    }
    fclose(file);

    char* filename="/Users/xuyabing/Develop/C++/cppStudy/文件2.txt";
    char data[200];                 //c++方式   写
    ofstream outfile;
    outfile.open(filename);
    cout<<"请输入你要保存的信息："<<endl;
    cin>>data;
    outfile<<data<<endl;
    outfile.close();

    char data2[300];            //c++  读
    ifstream read;
    read.open(filename);
    read>>data2;
    cout<<data2<<endl;
    return 0;
}