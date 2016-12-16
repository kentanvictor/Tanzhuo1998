/*
一6、请编写一个函数fun()，它的功能是：求一个整数的立方；若输入的整数在1到30之间，
函数返回该数的平方，否则返回-1。
例如，输入20<CR>（<CR>为回车键），函数将返回8000；输入-20<CR>（<CR>为回车键），
函数将返回-1，输入100<CR>（<CR>为回车键），函数将返回-1。
*/ 
#include"stdio.h"
int fun(int a)
{
	int l1;
	if(a>1&&a<30)
	{
		l1=a*a*a;
	}
	else
	{
		return (-1);
	}
	return l1;
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
	fprintf (wf,"%d ",fun(25));
	fprintf (wf,"%d ",fun(15));
	fprintf (wf,"%d ",fun(-22));
	fprintf (wf,"%d",fun(19));
	fclose(wf);
	/*******************************/
}
