/*
一12、请编写一个函数fun()，它的功能是：根据x的值求y的值，分段函数如下，输入x的值，函数返回y的值。
例如：若输入-1<CR>（<CR>为回车键），函数将返回-1；
若输入0<CR>（<CR>为回车键），函数将返回0；若输入10<CR>（<CR>为回车键），函数将返回1。
*/
#include"stdio.h"
int fun(double x)
{
	int y;
	if(x<0)
		return -1;
	else if(x==0)
		return 0;
	else
		return 1;
}
void main()
{
	FILE *wf;
	double x;
	int y;
	printf("请输入x：");
	scanf("%lf",&x);
	y=fun(x);
	printf("%d\n",y);
	/*******************************/
	wf=fopen("out.dat","w");
	fprintf (wf,"%d ",fun(0));
	fprintf (wf,"%d ",fun(-14));
	fprintf (wf,"%d",fun(14));
	fclose(wf);
	/*******************************/
}
