#include <stdio.h>
int main ()
{
	int x;
	printf("please input your score:\n");
	scanf("%d",&x);
	if (x>=90&&x<=100)
	{
		printf("your score %d lies in A\n",x );
	}else if (x>=80&&x<=89)
	{
		printf("your score %d lies in B\n",x );
	}else if (x>=70&&x<=79)
	{
		printf("your score %d lies in C\n",x );
	}else if (x>=60&&x<=69)
	{
		printf("your score %d lies in D\n",x );
	}else if (x>=0&&x<60)
	{
		printf("your score %d lies in E\n",x );
	}else if (x>100||x<0)
	{
		printf("your score is unreasonable\n");
	}
	return 0;
}