/* 
***************************************************************
不是最简单的版本，还可以再精简。 
*************************************************************** 
*/ 
/*
一3、请编写一个函数fun()，它的功能是：比较三个整数的大小，函数返回中间值的数。
例如，输入1 <CR>2 <CR>3<CR>（<CR>为回车键），函数将返回2。
注意：部分源程序已给出。
请勿改动主函数main和其他函数中的任何内容，仅在函数fun的花括号中填入所编写的若干语句。
*/
#include"stdio.h"
int fun(int a,int b,int c)
{
	int mid,k;
	k=a>b?a:b;
	if(k>c&&c>a)
	{
		mid=c;
	}
	else
	{
		mid=k;
	}
	return mid;
}
void main()
{
	FILE *wf;
	int a,b,c,d,middle;
	printf("请输入三个整数：");
	scanf("%d%d%d",&a,&b,&c);
	middle=fun(a,b,c);
	printf("中间值的整数为：%d\n",middle);
	/*******************************/
	wf=fopen("out.dat","w");
	fprintf (wf,"%d ",fun(100,99,101));
	fprintf (wf,"%d ",fun(1,9,10));
	fprintf (wf,"%d",fun(555,444,666));
	fclose(wf);
	/*******************************/
}
