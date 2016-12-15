/*
三12、请编写一个函数fun()，它的功能是：利用指针实现两个字符的交换。
输入2个字符，利用指针完成它们的互换，主函数已实现了数据的输入与输出。
	例如：输入ab <CR>（<CR>为回车键），将输出ba。
*/
#include"stdio.h"
void fun(char *a,char *b)
{
	char t;
	t=*a;
	*a=*b;
	*b=t;
}
void main()
{
	FILE *wf;
	char a,b;
	printf("请输入2个字符：");
	scanf("%c%c",&a,&b);
	printf("\n交换前的值为：%c%c\n",a,b);
	fun(&a,&b);
	printf("\n交换后的值为：%c%c\n",a,b);
	/*******************************/
	wf=fopen("out.dat","w");
	a='4';b='1';
	fun(&a,&b);
	fprintf (wf,"%c %c ",a,b);
	a='a';b='c';
	fun(&a,&b);
	fprintf (wf,"%c %c",a,b);
	fclose(wf);
	/*******************************/
}
