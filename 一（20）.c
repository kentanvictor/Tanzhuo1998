/*
一20、请编写一个函数fun()，它的功能是：计算三位整数中的各位数字之和。
输入一个三位整数，函数返回各位数字之和。
例如：若输入120<CR>（<CR>为回车键），函数将返回3；
若输入999<CR>（<CR>为回车键），函数将返回27。
*/ 
#include"stdio.h"
int fun(int x)
{
	int a,b,c,w;
	if(x>999||x<100)
		return -1;
	else 
	{
		a=x/100;
		b=x/10%10;
		c=x%10;
		w=a+b+c;
	}
	return w; 
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
	fprintf (wf,"%d ",fun(200));
	fprintf (wf,"%d",fun(998));
	fclose(wf);
	/*******************************/
}
