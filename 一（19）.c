/*
一19、请编写一个函数fun()，它的功能是：判别一个数是否为"水仙花"数。
输入一个三位整数，若是"水仙花"数，函数返回1，否则函数返回0。
（提示：水仙花数是一个三位数，且各位数字的立方和与该三位数相同。）
例如：若输入153<CR>（<CR>为回车键），函数将返回0；若输入351<CR>（<CR>为回车键），函数将返回0。
*/ 
#include"stdio.h"
int fun(int x)
{
	int a,b,c;
	a=x/100;
	b=x/10%10;
	c=x%10;
	if(x==a*a*a+b*b*b+c*c*c)
		return 1;
	else
		return 0;
}
void main()
{
	FILE *wf;
	int x,y;
	printf("请输入一个三位整数(100~999)：");
	scanf("%d",&x);
	y=fun(x);
	printf("%d\n",y);
	/*******************************/
	wf=fopen("out.dat","w");
	fprintf (wf,"%d ",fun(100));
	fprintf (wf,"%d",fun(153));
	fclose(wf);
	/*******************************/
}
