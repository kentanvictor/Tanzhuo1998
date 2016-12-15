/*
三5、请编写一个函数fun()，它的功能是：利用指针统计整数数列中0的个数。
输入包含10个数的整数数列，利用指针返回0的个数，主函数已实现数列的输入与结果的输出。
*/
#include"stdio.h"
void fun(int a[10],int *m)
{
	int i;
	*m=0;
	for(i=0;i<10;i++)
	{
		if(a[i]==0)
		*m+=1;
	}
}
void main()
{
	FILE *wf;
	int a[10],m;
	int b[10]={-1,0,0,9,10,11,12,1,-3,0};
	int c[10]={1,2,-3,-4,13,0,0,3};
	int i;
	printf("请输入10个整数：");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	fun(a,&m);
	printf("\n数列中0的个数为：%d\n",m);
	/*******************************/
	wf=fopen("out.dat","w");
	fun(b,&m);
	fprintf (wf,"%d ",m);
	fun(c,&m);
	fprintf (wf,"%d",m);
	fclose(wf);
	/*******************************/
}
