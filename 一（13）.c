/*
一13、请编写一个函数fun()，它的功能是：
根据输入的分数（0~100间的整数）输出对应的等级，
规则为：90~100：'A' ， 80~89：'B' ，70~79：'C' ，60~69：'D' ，0~59：'E'。 输入分数，函数返回等级。
例如：若输入100<CR>（<CR>为回车键），函数将返回'A'；
若输入75<CR>（<CR>为回车键），函数将返回'C'；若输入10<CR>（<CR>为回车键），函数将返回'E'。
*/ 
#include"stdio.h"
char fun(int x)
{
	int y;
	char A,B,C,D,E;
	A='A';
	B='B';
	C='C';
	D='D';
	E='E';
	switch(y=x/10)
	{
		case 10:
		case 9: return A;break;
		case 8: return B;break;
		case 7: return C;break;
		case 6: return D;break;
		default:return E;break;
	} 
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
	fprintf (wf,"%c ",fun(44));
	fprintf (wf,"%c ",fun(55));
	fprintf (wf,"%c ",fun(77));
	fprintf (wf,"%c ",fun(66));
	fprintf (wf,"%c",fun(99));
	fclose(wf);
	/*******************************/
}
