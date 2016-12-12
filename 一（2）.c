/*
一2、请编写一个函数fun()，它的功能是：比较四个整数的大小，函数返回最小的数。
例如，输入1 <CR>2 <CR>3<CR>4 <CR>（<CR>为回车键），函数将返回1。
注意：部分源程序已给出。
请勿改动主函数main和其他函数中的任何内容，仅在函数fun的花括号中填入所编写的若干语句。
*/ 
#include"stdio.h"
int fun(int a,int b,int c,int d)
{
	int min;
	min=a<b?a:b;
	min=min<c?min:c;
	min=min<d?min:d; 
	return min;	
}
void main()
{
	FILE *wf;
	int a,b,c,d,min;
	printf("请输入四个整数：");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	min=fun(a,b,c,d);
	printf("最小的整数为：%d\n",min);
	/*******************************/
	wf=fopen("out.dat","w");
	fprintf (wf,"%d ",fun(100,99,101,98));
	fprintf (wf,"%d ",fun(1000,909,1001,908));
	fprintf (wf,"%d",fun(1900,999,9101,998));
	fclose(wf);
	/*******************************/
}
