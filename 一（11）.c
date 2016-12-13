/*
一11、请编写一个函数fun()，它的功能是：根据整数x的值求y的值，分段函数如下，输入x的值，函数返回y的值。
例如：若输入-1<CR>（<CR>为回车键），函数将返回-1；若输入5<CR>（<CR>为回车键），函数将返回4；
若输入10<CR>（<CR>为回车键），函数将返回19。
*/
#include"stdio.h"
int fun(int x)
{
	int y;
	if(x<1)
		y=x;
	else if(x>=10)
		y=2*x-1;
	else
		y=3*x-11;
	return y;	
}
void main()
{
	FILE *wf;
	int x,y;
	printf("请输入x：");
	scanf("%d",&x);
	y=fun(x);
	printf("%d\n",y);
	/*******************************/
	wf=fopen("out.dat","w");
	fprintf (wf,"%d ",fun(15));
	fprintf (wf,"%d ",fun(5));
	fprintf (wf,"%d",fun(-15));
	fclose(wf);
	/*******************************/
}
