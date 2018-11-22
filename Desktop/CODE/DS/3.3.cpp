typedef int ElemType;
#include "stdlib.h"
#include "iostream.h"
#include "SqStack.h"
void main()
{
	SqStack mystack;
	int x,y;
	InitStack_Sq(mystack,10,10);
	cout<<"输入数据：";
	cin>>x;
	while(x!=-1)
	{
		if(!Push_Sq(mystack,x))
		{
			cout<<"进栈失败！"<<endl;
			return;}
		cin>>x;
	}
	cout<<"输出数据元素：";
	while(!StackEmpty_Sq(mystack))
	{
		if(!Pop_Sq(mystack,y))
		{cout<<"出栈失败！";
		return;}
		cout<<y<<" ";}
}

