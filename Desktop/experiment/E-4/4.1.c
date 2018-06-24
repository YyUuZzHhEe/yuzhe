#include <stdio.h>
int main ()
{
	//寻找完数
	int i,j,sum=0,x=1,a[1000],cnt=0;
	for (i = 6; i <= 1000; ++i)
	{
		for (j = 2; j < i; ++j)
		{
			if (i%j==0)
			{
				x+=j;
			}
		}
		if (x==i)
		{
			a[cnt]=i;
			cnt++;
		}
		x=1;
	}
	//完数求和
	for (i = 0; i < cnt; ++i)
	{
		sum+=a[i];
	}
	//输出完数1+完数2的形式
	for (i = 0; i < cnt-1; ++i)
	{
		printf("%d+",a[i] );
	}
	//最后一个完数不保留加号
	printf("%d=%d\n",a[cnt-1],sum );
	return ;
}