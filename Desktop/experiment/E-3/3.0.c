#include <stdio.h>
int main()
{
	int x,i,cnt=0;
	int a[3]={3,5,7};
	int b[3];
	printf("please input a number:\n");
	scanf("%d",&x);
	for (i = 0; i < 3; ++i)
	{
		if (x%a[i]==0)
		{
			b[cnt]=a[i];
			cnt++;
		}
	}
	if (cnt==0)
	{
		printf("x不能被3，5，7整除\n");
	}else{
		for (i = 0; i < cnt; ++i)
		{
			printf("x可以被%d整除\n",b[i]);
		}
	}
	return 0;
}