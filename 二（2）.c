/*
二2、请编写一个函数fun()，它的功能是：
求一个包含10个元素的整型数组中最大元素的下标，函数返回该下标。
例如，输入11<CR>22 <CR>33<CR>44 <CR>1 <CR>2 <CR>3<CR>4 <CR>10<CR>12 <CR>（<CR>为回车键），函数将返回3。
*/
#include"stdio.h"
int fun(int a[])
{
	int i,j,t;
	t=a[0];
	for(i=1;i<10;i++)
	{
		if(t<a[i])
		t=a[i];		
	}
	for(j=0;j<10;j++)
	{
		if(t==a[j])
		break;
	}
	return j;
}
void main()
{
	FILE *wf;
	int a[10],i,max;
	int b[10]={1,2,3,11,22,33,4,5,6,7};
	int c[10]={33,22,11,55,44,65,56,76,43,34};
	printf("请输入10个整数：");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	max=fun(a);
	printf("%d\n",max);
	/*******************************/
	wf=fopen("out.dat","w");
	fprintf (wf,"%d ",fun(b));
	fprintf (wf,"%d",fun(c));
	fclose(wf);
	/*******************************/
}
