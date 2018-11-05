typedef int ElemType;
#include<stdlib.h>
#include<iomanip>
#include<iostream>
#define QUEUE_INIT_SIZE 100	
using namespace std;
//定义结构体 
typedef struct{
	ElemType *queue;
	int front;
	int rear;
	int queuesize;
	int count;
}SqQueue;
//初始化操作
bool Init_Sq(SqQueue &Q, int maxsize=QUEUE_INIT_SIZE){
	Q.queue=(ElemType*)malloc(maxsize*sizeof(ElemType));
	if(!Q.queue){
		exit(1);
	}
	Q.front=Q.rear=0;
	Q.queuesize=maxsize;
	Q.count=0;
	return true;
} 
//进队操作
bool En_Sq(SqQueue &Q, ElemType e){
	if(Q.count>0&&Q.front==Q.rear){
		return false;
	}
	Q.queue[Q.rear]=e;
	Q.rear=(Q.rear+1)%Q.queuesize;
	Q.count++;
	return true;
}
//出队操作
bool De_Sq(SqQueue &Q,ElemType &e){
	if(Q.count==0){
		return false;
	}
	e=Q.queue[Q.front];
	Q.front=(Q.front+1)%Q.queuesize;
	Q.count--;
	return true;
}
//取队首操作
bool getfront_Sq(SqQueue &Q, ElemType &e){
	if(Q.count==0){
		return false;
	}
	e=Q.queue[Q.front];
	return true;
}
//判空
bool Empty_Sq(SqQueue &Q){
	return Q.count==0;
} 
int main()
{
	SqQueue Q;
	int i,x;
	Init_Sq(Q);
	for(int i = 0; i < 10; i++){
		En_Sq(Q, i); 
	}
	if(Empty_Sq(Q)){
		cout<<"The queue is empty."<<endl;
	}
	for(i=0;i<10;i++){
		cout<<"print the first five elements"<<endl;
		for(i=0;i<5;i++){
			De_Sq(Q,x);
			cout<<setw(5)<<x;
		} 
		cout<<endl;
		cout<<"get the first emelent now."<<endl;
		getfront_Sq(Q,x);
		cout<<x<<endl;
		return 0;
	}
}
 
