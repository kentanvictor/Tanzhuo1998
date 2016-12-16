/*
三13、请编写一个函数fun()，它的功能是：
利用指针计算Fibonacci数列前n项之和。输入n（不超过100），利用指针计算Fibonacci数列前n项之和，
主函数已实现了n的输入与结果输出。（提示：Fibonacci数列为：1、1、2、3、5、……）
	例如：输入5<CR>（<CR>为回车键），将输出12.000000；输入100<CR>（<CR>为回车键），
	将输出927372692193079200000.000000。
*/
#include"stdio.h"
void fun(int n,double *sum)
{
	int i;
	double f1,f2,f3;
	*sum=2;
	f1=f2=1;
	for(i=3;i<=n;i++)
	{
		f3=f1+f2;
		*sum+=f3;
		f1=f2;
		f2=f3;
	}
}
void main()
{
	FILE *wf;
	int n;
	double sum;
	printf("请输入n(不超过100)：");
	scanf("%d",&n);
	fun(n,&sum);
	printf("Fibonacci数列前n项之和为：%lf\n",sum);
	/*******************************/
	wf=fopen("out.dat","w");
	fun(5,&sum);
	fprintf (wf,"%lf ",sum);
	fun(10,&sum);
	fprintf (wf,"%lf ",sum);
	fun(100,&sum);
	fprintf (wf,"%lf",sum);
	fclose(wf);
	/*******************************/
}
