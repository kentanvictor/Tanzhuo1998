/*
二9、请编写一个函数fun()，它的功能是：统计素数的个数。输入一个自然数n（n在100到10000之间），
函数返回100到n之间（包括n）素数的个数。（提示：只能被1和它本身整除的数为素数。）
例如，输入1000 <CR>（<CR>为回车键），函数将返回143。
*/
#include"stdio.h"
int fun(int a)
{
	int i,j,sum=0;
	for(i=100;i<=a;i++)
	{
		for(j=2;j<i;j++)
		{
			if(j==i - 1)
			{	
				sum++;
				
			}
			if(i%j==0)
				break ;
		}
		
	}
	return sum; 
}
void main()
{
	FILE *wf;
	int a,count;
	printf("请输入一个整数（100~10000）：");
	scanf("%d",&a);
	count=fun(a);
	printf("素数的个数为：%d\n",count);
	/*******************************/
	wf=fopen("out.dat","w");
	fprintf (wf,"%d ",fun(200));
	fprintf (wf,"%d ",fun(2000));
	fprintf (wf,"%d",fun(10000));
	fclose(wf);
	/*******************************/
}
