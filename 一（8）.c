/*
一8、请编写一个函数fun()，它的功能是：求一元二次方程的实根个数；
通过输入二次项系数、一次项系数及常数项，若使得该方程有两个不相等的实根，函数返回2，
若使得该方程有两个相等的实根，函数返回1，否则返回0。
例如，输入1<CR>0<CR>-1<CR>（<CR>为回车键），函数将返回2；
输入1<CR>-2<CR>1<CR>（<CR>为回车键），函数将返回1；输入1<CR>2<CR>2<CR>（<CR>为回车键），函数将返回0。
*/
#include"stdio.h"
int fun(double a,double b,double c)
{
	int f1;
	f1=b*b-4*a*c;
	if(f1>0)
		return 2;
	if(f1==0)
		return 1;
	if(f1<0)
		return 0;
}
void main()
{
	FILE *wf;
	double a,b,c;
	int d;
	printf("请输入一元二次方程的二次项系数、一次项系数及常数项：");
	scanf("%lf%lf%lf",&a,&b,&c);
	d=fun(a,b,c);
	printf("%d\n",d);
	/*******************************/
	wf=fopen("out.dat","w");
	fprintf (wf,"%d ",fun(2,2,2));
	fprintf (wf,"%d ",fun(1,2,1));
	fprintf (wf,"%d ",fun(1,-2,1));
	fprintf (wf,"%d",fun(30,28,-92));
	fclose(wf);
	/*******************************/
}
