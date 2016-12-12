/*
一4、请编写一个函数fun()，它的功能是：求一个整数的平方根；若输入的整数在1到1000之间，
函数返回该数的平方根，否则返回-1。（提示：可使用求平方根函数：sqrt()）
例如，输入500<CR>（<CR>为回车键），函数将返回22.360680；输入-500<CR>（<CR>为回车键），
函数将返回-1.000000，输入2000<CR>（<CR>为回车键），函数将返回-1.000000。
注意：部分源程序已给出。
请勿改动主函数main和其他函数中的任何内容，仅在函数fun的花括号中填入所编写的若干语句。
*/ 
#include"stdio.h"
#include"math.h"
double fun(int a)
{
	double squr;
	if(a<0||a>1000)
	{
		return(-1.0);
	}
	else
	{
		squr=sqrt(a);
	}
	return squr;
}
void main()
{
	FILE *wf;
	int a;
	double b;
	printf("请输入一个整数：");
	scanf("%d",&a);
	b=fun(a);
	printf("%f\n",b);
	/*******************************/
	wf=fopen("out.dat","w");
	fprintf (wf,"%f ",fun(765));
	fprintf (wf,"%f ",fun(-700));
	fprintf (wf,"%f",fun(678));
	fclose(wf);
	/*******************************/
}
