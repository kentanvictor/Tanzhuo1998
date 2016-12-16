/*
一5、请编写一个函数fun()，它的功能是：求一个整数的平方；若输入的整数在1到100之间，
函数返回该数的平方，否则返回-1。
例如，输入20<CR>（<CR>为回车键），函数将返回400；输入-20<CR>（<CR>为回车键），
函数将返回-1，输入1000<CR>（<CR>为回车键），函数将返回-1。
注意：部分源程序已给出。
请勿改动主函数main和其他函数中的任何内容，仅在函数fun的花括号中填入所编写的若干语句。
*/
#include"stdio.h"
int fun(int a)
{
	int p1;
	if(a>1&&a<100)
	{
		p1=a*a;
	}
	else
	{
		return(-1);
	}
	return p1;
}
void main()
{
	FILE *wf;
	int a;
	int b;
	printf("请输入一个整数：");
	scanf("%d",&a);
	b=fun(a);
	printf("%d\n",b);
	/*******************************/
	wf=fopen("out.dat","w");
	fprintf (wf,"%d ",fun(50));
	fprintf (wf,"%d ",fun(97));
	fprintf (wf,"%d ",fun(0));
	fprintf (wf,"%d",fun(-100));
	fclose(wf);
	/*******************************/
}
