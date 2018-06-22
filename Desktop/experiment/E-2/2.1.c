#include <stdio.h>
int main ()
{
	int x,a,b,c,d,sum;
	printf("please input a number in thousands:\n");
	scanf("%d",&x);
	a=(x/1000);
	b=(x-a*1000)/100;
	c=(x-a*1000-b*100)/10;
	d=x%1000%100%10;
	sum=a+b+c+d;
	printf("千位=%d   百位=%d   十位=%d   个位=%d   sum=%d\n",a,b,c,d,sum );
	return 0;
}