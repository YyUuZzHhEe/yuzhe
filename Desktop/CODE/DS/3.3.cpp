typedef int ElemType;
#include "stdlib.h"
#include "iostream.h"
#include "SqStack.h"
void main()
{
	SqStack mystack;
	int x,y;
	InitStack_Sq(mystack,10,10);
	cout<<"�������ݣ�";
	cin>>x;
	while(x!=-1)
	{
		if(!Push_Sq(mystack,x))
		{
			cout<<"��ջʧ�ܣ�"<<endl;
			return;}
		cin>>x;
	}
	cout<<"�������Ԫ�أ�";
	while(!StackEmpty_Sq(mystack))
	{
		if(!Pop_Sq(mystack,y))
		{cout<<"��ջʧ�ܣ�";
		return;}
		cout<<y<<" ";}
}

