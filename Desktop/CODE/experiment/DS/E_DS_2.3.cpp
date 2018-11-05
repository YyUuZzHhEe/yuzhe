typedef int ElemType;
#include <stdlib.h>
#include <iomanip>
#include "SqStack.h"
#include <time.h>
#include <iostream>
#include <math.h>
using namespace std;
void oddevenstack_Sq(SqStack &S1,SqStack &S2,ElemType e){
	if(e%2==0){
		Push_Sq(S2,e);
	}else{
		Push_Sq(S1,e);
	}
}
int main ()
{
	SqStack S1,S2;
	ElemType x;
	InitStack_Sq(S1,100,10);
	InitStack_Sq(S2,100,10);
	srand(time(0));
	for(int i = 0;i < 100;i++){
		ElemType e = rand()%100 + 100;
		oddevenstack_Sq(S1,S2,e);
	}
		cout<<"ood: "<<endl;
		while(!StackEmpty_Sq(S1)){
			if(!Pop_Sq(S1,x)){
				cout<<"error"<<endl;
			}
			cout<<setw(6)<<x;
		}
		cout<<endl;
		cout<<"even:"<<endl;
		while(!StackEmpty_Sq(S2)){
			if(!Pop_Sq(S2,x)){
				cout<<"error"<<endl;
			}
			cout<<setw(6)<<x;
		}
		cout<<endl;
	DestroyStack_Sq(S1);
	DestroyStack_Sq(S2);
	return 0;
}
