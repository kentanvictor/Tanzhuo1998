/*
二5、请编写一个函数fun()，它的功能是：求两个整数的最大公约数。输入两个整数，函数返回最大公约数。
例如，输入16 <CR>24<CR>（<CR>为回车键），函数将返回8。
*/
#include"stdio.h"
int fun(int m,int n)
{
	int  temp;          /*定义整型变量*/  
  if(m<n)             /*通过比较求出两个数中的最大值和最小值*/  
  {   
      temp=m;  
      m=n;  
      m=temp;  
    } /*设置中间变量进行两数交换*/  
   while(n!=0)           /*通过循环求两数的余数，直到余数为0*/  
   {  
      temp=m%n;  
      m=n;              /*变量数值交换*/  
      n=temp;  
    }  
  return m;
}
void main()
{
	FILE *wf;
	int m,n,p;
	printf("请输入两个整数：");
	scanf("%d%d",&m,&n);
	p=fun(m,n);
	printf("最大公约数为：%d\n",p);
	/*******************************/
	wf=fopen("out.dat","w");
	fprintf (wf,"%d ",fun(6,9));
	fprintf (wf,"%d ",fun(18,30));
	fprintf (wf,"%d",fun(333,99));
	fclose(wf);
	/*******************************/
}
