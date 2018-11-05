typedef int ElemType;
#include <stdlib.h>
#include <iomanip>
#include <iostream>
#include "SqQueue.h"
#include "SqStack.h"
using namespace std;
bool Inverse(SqQueue &Q,SqStack &S){
	ElemType e;
	while(!QueueEmpty_Sq(Q)){
		DeQueue_Sq(Q,e);
		Push_Sq(S,e);
	}
	while(!StackEmpty_Sq(S)){
		Pop_Sq(S,e);
		EnQueue_Sq(Q,e);
	}
	while(!QueueEmpty_Sq(Q)){
		DeQueue_Sq(Q,e);
		cout<<setw()<<e;
	}
	return true;
}
int main ()
{
	ElemType e;
	SqStack S;
	SqQueue myqueue;
	InitQueue_Sq(myqueue,10,10);
	InitStack_Sq(S,100,10);
	int a[5]={0,1,2,3,4};
	cout<<"the elements are:0 1 2 3 4"<<endl;
	for(int i = 0;i < 5; i++){
		if(!EnQueue_Sq(myqueue, i)){
			cout<<"error"<<endl;
		}
	} 
	cout<<"the elements are:"<<endl;
	Inverse(myqueue,S);
//	for(int i = 0; i < 5; i++){
//		DeQueue_Sq(myqueue, e);
//		cout << e; 
//	}
	cout<<endl;
	return 0;
}
