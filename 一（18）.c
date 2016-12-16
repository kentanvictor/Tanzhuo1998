/*一18、请编写一个函数fun()，它的功能是：实现大小写字母的相互转换。
输入一个字符，若为小写字母，函数返回对应的大写字母；否则函数返回原字符。
例如：若输入*<CR>（<CR>为回车键），函数将返回'*'；
若输入a<CR>（<CR>为回车键），函数将返回'A'；若输入1<CR>（<CR>为回车键），函数将返回'1'。
*/
#include"stdio.h"
char fun(char x)
{
	char zh1;
	if(x>='a'&&x<='z')
		zh1=(x>='a'&&x<='z')?(x-32):x;
	else
	zh1=x;
	return zh1;
}
void main()
{
	FILE *wf;
	char x,y;
	printf("请输入一个字符：");
	scanf("%c",&x);
	y=fun(x);
	printf("%c\n",y);
	/*******************************/
	wf=fopen("out.dat","w");
	fprintf (wf,"%c ",fun('b'));
	fprintf (wf,"%c ",fun('*'));
	fprintf (wf,"%c",fun('B'));
	fclose(wf);
	/*******************************/
}
