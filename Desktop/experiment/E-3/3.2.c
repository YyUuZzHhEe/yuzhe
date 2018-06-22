#include <stdio.h>
int main ()
{
	int x,n;
	printf("please input your score:\n");
	scanf("%d",&x);
	if (x>=90&&x<=100)
	{
		n=0;
		
	}else if (x>=80&&x<=89)
	{
		n=1;
		
	}else if (x>=70&&x<=79)
	{
		n=2;
		
	}else if (x>=60&&x<=69)
	{
		n=3;
		
	}else if (x>=0&&x<60)
	{
		n=4;
		printf("your score %d lies in E\n",x );
	}else if (x>100||x<0)
	{
		n=5;
		
	}
	switch (n)
	{
		case 0 :printf("your score %d lies in A\n",x );break;
		case 1 :printf("your score %d lies in B\n",x );break;
		case 2 :printf("your score %d lies in C\n",x );break;
		case 3 :printf("your score %d lies in D\n",x );break;
		case 4 :printf("your score %d lies in E\n",x );break;
		case 5 :printf("your score is unreasonable\n");break;
	}

	return 0;
}