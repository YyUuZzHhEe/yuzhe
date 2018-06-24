#include <stdio.h>
int main ()
{
	int money;
	char a;
	printf("please input your money:\n");
	scanf("%d",&money);
	printf("please input your drink:\n");
	getchar();
	a=getchar();
	if (money==2)
	{
		switch(a){
			case 'A' :printf("康师傅矿泉水\n");break;
			case 'B' :printf("怡宝矿泉水\n");break;
			case 'C' :printf("农夫山泉\n");break;
		}
	}
	if (money==3)
	{
		switch(a){
			case 'A' :printf("可乐\n");break;
			case 'B' :printf("雪碧\n");break;
			case 'C' :printf("果汁\n");break;
		}
	}
	if (money==5)
	{
		switch(a){
			case 'A' :printf("奶茶\n");break;
			case 'B' :printf("咖啡\n");break;
			case 'C' :printf("酸奶\n");break;
		}
	}
	return 0;
}