//
// Created by xuyabing on 2020/1/12.
//
#include <iostream>
#include <pthread.h>        //c++线程库
void m_threadSleep(int sec,int nsec)
{
    struct timespec sleepTime;
    struct timespec returnTime;
    sleepTime.tv_sec = sec;
    sleepTime.tv_nsec = nsec;
    nanosleep(&sleepTime, &returnTime);
}
using namespace std;
void *  customThread(void * pVoid){
    int result= *static_cast<int*>(pVoid);  //static_cast把void*转换成int*指针，然后*取出内存地址对应的值
    cout<<"线程运行:"<<result<<endl;
    for (int i = 0; i < 200; ++i) {
       m_threadSleep(1,0);
       cout<<"线程运行:"<<result<<endl;
    }
}
int main(){
    pthread_t  pthreadid;   //线程id
//    int pthread_create(pthread_t * pid,                   //线程id
//                       const pthread_attr_t * attr,       //线程属性
//                       void *  (* function)(void * _Nullable),    //函数指针定义异步任务
//                       void *  args);     //函数指针参数传递
//    int value=999;
//    pthread_create(&pthreadid,0,customThread,&value);
//    pthread_join(pthreadid,0);
//    cout<<"线程执行完毕"<<endl;


    pthread_t pthreadId2;
    pthread_attr_t pthreadAttr;     //线程属性，不允许有野指针，有坑的
    int value2=3232;
    pthread_attr_init(&pthreadAttr);
//    pthread_attr_setdetachstate(&pthreadAttr,PTHREAD_CREATE_DETACHED);  //开启分离线程，各玩各的
//    pthread_create(&pthreadId2,&pthreadAttr,customThread,&value2);
    pthread_create(&pthreadId2,0,customThread,&value2);
    pthread_join(pthreadId2,0);         //什么是分离线程 和非分离线程
    pthread_attr_destroy(&pthreadAttr);
    cout<<"线程执行完毕"<<endl;
    return 0;
}