/*
三8、请编写一个函数fun()，它的功能是：利用指针完成3个整数的排序。
输入3个整数，利用指针对这3个整数按从大到小的顺序排序，主函数已实现数据的输入与结果的输出。
*/
#include"stdio.h"
void fun(int *a,int *b,int *c)
{
	int t;
	if(*a<*b)
	{
		t=*a;
		*a=*b;
		*b=t;
	}
	if(*a<*c)
	{
		t=*a;
		*a=*c;
		*c=t;
	}
	if(*b<*c)
	{
		t=*b;
		*b=*c;
		*c=t;
	}
}
void main()
{
	FILE *wf;
	int a,b,c;
	printf("请输入3个整数：");
	scanf("%d%d%d",&a,&b,&c);
	fun(&a,&b,&c);
	printf("\n按从大到小的顺序排序后的结果为：%d %d %d\n",a,b,c);
	/*******************************/
	wf=fopen("out.dat","w");
	a=8;b=9;c=7;
	fun(&a,&b,&c);
	fprintf (wf,"%d %d %d ",a,b,c);
	a=18;b=9;c=17;
	fun(&a,&b,&c);
	fprintf (wf,"%d %d %d",a,b,c);
	fclose(wf);
	/*******************************/
}
