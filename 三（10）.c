/*
三10、请编写一个函数fun()，它的功能是：利用指针计算整数数列中元素的平均值。
输入包含5个数的整数数列，利用指针返回5个数的平均值，主函数已实现数列的输入与和的输出。
*/
#include"stdio.h"
void fun(int a[5],double *m)
{
	int i;
	*m=a[0];
	for(i=1;i<5;i++)
	{
		*m+=a[i];
	}
	*m=*m/5;
}
void main()
{
	FILE *wf;
	int a[5];
	double m;
	int b[5]={9,10,11,12,1};
	int c[5]={1,2,3,4,13};
	int i;
	printf("请输入5个数：");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	fun(a,&m);
	printf("\n数列的平均值为：%lf\n",m);
	/*******************************/
	wf=fopen("out.dat","w");
	fun(b,&m);
	fprintf (wf,"%lf ",m);
	fun(c,&m);
	fprintf (wf,"%lf",m);
	fclose(wf);
	/*******************************/
}
