/*
三3、请编写一个函数fun()，它的功能是：利用指针计算整数数列中各元素的和。
输入包含5个数的整数数列，利用指针返回5个数的和，主函数已实现数列的输入与和的输出。
*/
#include"stdio.h"
void fun(int a[5],int *m)
{
	int t;
	*m=a[0];
	for(t=1;t<5;t++)
	{
		*m+=a[t];
	}
}
void main()
{
	FILE *wf;
	int a[5],m;
	int b[5]={9,10,11,12,1};
	int c[5]={1,2,3,4,13};
	int i;
	printf("请输入5个数：");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	fun(a,&m);
	printf("\n数列的和为：%d\n",m);
	/*******************************/
	wf=fopen("out.dat","w");
	fun(b,&m);
	fprintf (wf,"%d ",m);
	fun(c,&m);
	fprintf (wf,"%d",m);
	fclose(wf);
	/*******************************/
}
