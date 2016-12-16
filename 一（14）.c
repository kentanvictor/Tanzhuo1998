/*
一14、请编写一个函数fun()，它的功能是：根据输入的分数（0~100间的整数）计算对应的等级，
规则为：85~100：'A' ， 70~84：'B' ，0~69：'C'。输入分数，函数返回等级。
例如：若输入100<CR>（<CR>为回车键），函数将返回'A'；
若输入75<CR>（<CR>为回车键），函数将返回'B'；若输入10<CR>（<CR>为回车键），函数将返回'C'。
*/
#include"stdio.h"
char fun(int x)
{
	char a='A',b='B',c='C';
	if(x>=85&&x<=100)
		return a;
	else if(x>=70&&x<=84)
		return b;
	else
		return c;
}
void main()
{
	FILE *wf;
	int x;
	char y;
	printf("请输入一个分数（0~100间的整数）：");
	scanf("%d",&x);
	y=fun(x);
	printf("%c\n",y);
	/*******************************/
	wf=fopen("out.dat","w");
	fprintf (wf,"%c ",fun(85));
	fprintf (wf,"%c ",fun(75));
	fprintf (wf,"%c",fun(65));
	fclose(wf);
	/*******************************/
}
