/*
三11、请编写一个函数fun()，它的功能是：利用指针实现两个整数的交换。
输入2个整数，利用指针完成它们的互换，主函数已实现了数据的输入与输出。
*/
#include"stdio.h"
void fun(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
void main()
{
	FILE *wf;
	int a,b;
	printf("请输入2个数：");
	scanf("%d%d",&a,&b);
	printf("\n交换前的值为：%d %d\n",a,b);
	fun(&a,&b);
	printf("\n交换后的值为：%d %d\n",a,b);
	/*******************************/
	wf=fopen("out.dat","w");
	a=4;b=10;
	fun(&a,&b);
	fprintf (wf,"%d %d ",a,b);
	a=40;b=410;
	fun(&a,&b);
	fprintf (wf,"%d %d",a,b);
	fclose(wf);
	/*******************************/
}
