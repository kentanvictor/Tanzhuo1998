/*
三14、请编写一个函数fun()，它的功能是：利用指针计算Fibonacci数列第n项。
输入n（不超过100），利用指针计算Fibonacci数列第n项，主函数已实现了n的输入与结果输出。
（提示：Fibonacci数列为：1、1、2、3、5、……）
	例如：输入6<CR>（<CR>为回车键），将输出8.000000；输入100<CR>（<CR>为回车键），
	将输出354224848179262000000.000000。
*/
#include"stdio.h"
void fun(int n,double *s)
{
	int i;
	double f1,f2,f3;
	f1=f2=1;
	for(i=3;i<=n;i++)
	{
		f3=f1+f2;
		f1=f2;
		f2=f3;
	}
	*s=f3;
}
void main()
{
	FILE *wf;
	int n;
	double s;
	printf("请输入n(不超过100)：");
	scanf("%d",&n);
	fun(n,&s);
	printf("Fibonacci数列第n项为：%lf\n",s);
	/*******************************/
	wf=fopen("out.dat","w");
	fun(5,&s);
	fprintf (wf,"%lf ",s);
	fun(10,&s);
	fprintf (wf,"%lf ",s);
	fun(100,&s);
	fprintf (wf,"%lf",s);
	fclose(wf);
	/*******************************/
}
