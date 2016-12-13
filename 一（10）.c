/*一10、请编写一个函数fun()，它的功能是：判断一个年份是否为平年；
若输入的年份为平年，函数返回1，否则返回-1。
（提示：能被4整除但不能被100整除的年份是闰年，能直接被400整除的年份也是闰年，其余的为平年。）
例如，输入2000<CR>（<CR>为回车键），函数将返回-1；输入2100<CR>（<CR>为回车键），函数将返回1。
*/
#include"stdio.h"
int fun(int y)
{
	if((y%4==0&&y%100!=0)||(y%400==0)) 
		return -1;
	else
		return 1;
}
void main()
{
	FILE *wf;
	int y,a;
	printf("请输入一个年份：");
	scanf("%d",&y);
	a=fun(y);
	printf("%d\n",a);
	/*******************************/
	wf=fopen("out.dat","w");
	fprintf (wf,"%d ",fun(1996));
	fprintf (wf,"%d ",fun(1986));
	fprintf (wf,"%d",fun(2200));
	fclose(wf);
	/*******************************/
}
