/*
三1、请编写一个函数fun()，它的功能是：利用指针求整数数列中的最大值。
输入包含5个数的整数数列，利用指针返回其中的最大值，主函数已实现数列的输入与最大值的输出。
*/
#include"stdio.h"
void fun(int a[5],int *max)
{
	int i,j,t;
	for(i=0;i<5;i++)
	{
		for(j=0;j<i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	*max=a[4];
}
void main()
{
	FILE *wf;
	int a[5],max;
	int b[5]={9,10,11,12,1};
	int c[5]={1,2,3,4,13};
	int i;
	printf("请输入5个数：");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	fun(a,&max);
	printf("\n数列中最大数为：%d\n",max);
	/*******************************/
	wf=fopen("out.dat","w");
	fun(b,&max);
	fprintf (wf,"%d ",max);
	fun(c,&max);
	fprintf (wf,"%d",max);
	fclose(wf);
	/*******************************/
}
