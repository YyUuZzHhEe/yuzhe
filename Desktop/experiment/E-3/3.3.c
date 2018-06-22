#include <stdio.h>
#define N 5
int main ()
{
	int a[N];
	int max=0,min=0,i;
	printf("please input the numbers:\n");
	for (i = 0; i < N; ++i)
	{
		scanf("%d",&a[i]);
	}
	for (i = 1,max=a[0],min=a[0]; i < N; ++i)
	{
		if (a[i]>max)
		{
			max=a[i];
		}
		if (a[i]<min)
		{
			min=a[i];
		}
	}
	printf("the max=%d \nthe min=%d\n",max,min );
	return 0;
}