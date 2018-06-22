# include <stdio.h>
int main ()
{
	double rate=0.0225;
	int n,i;
	double capital,deposit;
	printf("please input the rate=\n");
	scanf("%lf",&rate);
	printf("the year for deposit n=\n");
	scanf("%d",&n);
	printf("capital=\n");
	scanf("%lf",&capital);
	for (i = 0; i < n; ++i)
	{
		deposit=capital*=(1+rate);
	}
	printf("after %d years, the deposit=%lf\n",n,deposit );

	return 0;
}