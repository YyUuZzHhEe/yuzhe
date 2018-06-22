#include <stdio.h>
int main ()
{
	int x,i;
	int a[4]={25,10,5,1};
	int b[4]={0};
	printf("please input the money:  (cents)\n");
	scanf("%d",&x);
	for (i = 0; i < 4; ++i)
	{
		b[i]=x/a[i];
		x=x-b[i]*a[i];
	}
	for (i = 0; i < 4; ++i)
	{
		printf("%d'=%d\n",a[i],b[i] );
	}
	return 0;
}