//
// Created by xuyabing on 2020/1/12.
//
#include <iostream>
#include <queue>
#include <pthread.h>
using namespace std;
pthread_mutex_t mutex_t;
queue<int> quene;

void * customThreadMethod(void* pVoid){
    pthread_mutex_lock(&mutex_t);
    int value=*static_cast<int*>(pVoid);
    if(!quene.empty()){
        cout<<"队列中元素为："<<quene.front()<<" 所在的线程标记:"<<value<<endl;
        quene.pop();
    } else{
        cout<<"队列中元素为空"<<endl;
    }
    pthread_mutex_unlock(&mutex_t);
}
int main(){
    pthread_mutex_init(&mutex_t,NULL);
    for (int i = 0; i <1000 ; ++i) {
        quene.push(i);
    }
    pthread_t pthreadId[10];
    for (int j = 0; j <10 ; ++j) {
        pthread_create(&pthreadId[j],0,customThreadMethod,&j);
        pthread_join(pthreadId[j],0);
    }
    system("pause");
    pthread_mutex_destroy(&mutex_t);
    return 0;
}
