/*
三2、请编写一个函数fun()，它的功能是：利用指针求整数数列中的最小值。
输入包含5个数的整数数列，利用指针返回其中的最小值，主函数已实现数列的输入与最小值的输出。
*/
#include"stdio.h"
void fun(int a[5],int *min)
{
	int t;
	*min=a[0];
	for(t=1;t<5;t++)
	{
		if(*min>a[t])
			*min = a[t];
	}
}
void main()
{
	FILE *wf;
	int a[5],min;
	int b[5]={9,10,11,12,1};
	int c[5]={1,2,3,4,13};
	int i;
	printf("请输入5个数：");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	fun(a,&min);
	printf("\n数列中最小数为：%d\n",min);
	/*******************************/
	wf=fopen("out.dat","w");
	fun(b,&min);
	fprintf (wf,"%d ",min);
	fun(c,&min);
	fprintf (wf,"%d",min);
	fclose(wf);
	/*******************************/
}
