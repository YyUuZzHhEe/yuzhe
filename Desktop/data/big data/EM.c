#include <stdio.h>
#define N 10//每轮实验投掷硬币的次数
#define T 5//进行的试验次数 
#define C 8//对数据进行训练的次数
/*幂函数y=x^n*/
double fact(x,n){
	double y=1;
	int i;
	for (i = 0; i < n; ++i)
	{
		y*=x;
	}
	return y;
}
int main ()
{
	double PA[T], PB[T], PAh[T], PBh[T];
	int h[N], t[N];
	//赋初值
	printf("赋初值：请输入投掷硬币为A的概率:PA=");
	scanf("%lf",&PA[0]);
	printf("赋初值：请输入投掷硬币为B的概率:PB=");
	scanf("%lf",&PB[0]);
	int k;
	for (k = 0; k < C; ++k)
	{
		int i;
		for(i=0; i < T; i++){
			printf("请输入第%d次投掷硬币得到为正面的次数：h1:",i+1);
			scanf("%d",&h[i]);
			printf("...得到反面的次数:t1:");
			scanf("%d",&t[i]);
			/*E步*/
			PAh[i]=fact(PA[i],h[i])*fact((1-PA[i]),t[i])/(fact(PA[i],h[i])*fact((1-PA[i]),t[i])+fact(PB[i],h[i])*fact((1-PB[i]),t[i]));
			//printf("%lf",PA1);//是硬币A的概率
			PBh[i]=fact(PB[i],h[i])*fact((1-PB[i]),t[i])/(fact(PA[i],h[i])*fact((1-PA[i]),t[i])+fact(PB[i],h[i])*fact((1-PB[i]),t[i]));
			//printf("%lf",PB1);//是硬币B的概率
		}
		/*M步--极大似然法--k/n*/
		double PAk,PBk;
		int m;
		for (m = 0; m < T; ++m)
		{
			PAk+=PAh[m]*h[m];
			PBk+=PBh[m]*t[m];
		}
		int j=1;
		PA[j]=PAk/(PAk+PBk);
		PB[j]=PBk/(PAk+PBk);
		printf("经过第%d次训练\n",j );
		printf("投掷A硬币为正面的概率为%lf\n", PA[j]);
		printf("投掷B硬币为正面的概率为%lf\n", PB[j]);
		j++;
	}
	return 0;
}