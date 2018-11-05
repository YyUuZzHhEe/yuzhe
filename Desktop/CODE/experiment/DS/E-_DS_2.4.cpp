typedef int ElemType;
#include <stdlib.h>
#include <iomanip>
#include "SqQueue.h"
#include <time.h>
#include <iostream>
using namespace std;
//waiting in the line
void Wait_Line(SqQueue &Q){
	int x;
	cout<<"please input the number of the patients:(end with 0)"<<endl;
	while(1){
		cin>>x;
		if(x==0){
			break;
		}
		EnQueue_Sq(Q, x);
	}
} 
//go to see the doctor
void Clinic_Line(SqQueue &Q){
	int e;
	DeQueue_Sq(Q,e);
	cout<<"the number:"<<endl;
	cout<<e;
	cout<<"Go to see the doctor please."<<endl;
}
//check the line
bool Check_Line(SqQueue &Q){
	if(Q.front==Q.rear){
		return false;
	}
	int len = QueueLength_Sq(Q);
    for(int i = 0; i < len; i++){
        cout.setf(ios::left);
        cout << setw(5) << Q.queue[(Q.front + i) % Q.queuesize];
    }
	return true;
}
//leave the line
void Leave_Line(SqQueue &Q){
	int y;
	cout<<"the line:"<<endl;
	while(!QueueEmpty_Sq(Q)){
		DeQueue_Sq(Q,y);
		cout<<setw(3)<<y;
	}
}
int main ()
{
	SqQueue Q;
	int flag;
	InitQueue_Sq(Q);
	do{
		cout<<"the service:"<<endl;
		cout<<"1. wait in the line"<<endl;
		cout<<"2. go to see the doctor"<<endl;
		cout<<"3. check the line"<<endl;
		cout<<"4. leave the line"<<endl;
		cout<<"5. no service"<<endl;
		cout<<"please choose: "<<endl;
		do{
			cin>>flag;
			if(flag<1||flag>5){
				cout<<"error"<<endl;
			}
		}while(flag<1||flag>5);
		switch(flag){
			case 1: Wait_Line(Q);break;
			case 2: Clinic_Line(Q);break;
			case 3: Check_Line(Q);break;
			case 4: {
				Leave_Line(Q);
				int e;
				DeQueue_Sq(Q,e);
			}break; 
			case 5: exit(0); 
		}
	}while(1);
	DestroyQueue_Sq(Q);
	return 0;
}
