/*
二4、请编写一个函数fun()，它的功能是：求一个二维数组（4行3列）中最小元素的值，函数返回该值。
例如，二维数组如下，函数将返回0。
3 4 5 
1 2 3
3 2 5
8 0 6
*/
#include"stdio.h"
int fun(int a[4][3])
{
	int i,j;
	int min =a[0][0];
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			if(min>a[i][j])
			min=a[i][j];
		}
	}
	return min;
}
void main()
{
	FILE *wf;
	int a[4][3]={{3,4,5},{1,2,3},{3,2,5},{8,0,6}},min;
	int b[4][3]={{3},{-1,5},{6,6,6},{9}};
	int c[4][3]={{1,10},{1,-100},{1},{10,3,4}};
	min=fun(a);
	printf("最小元素值为：%d\n",min);
	/*******************************/
	wf=fopen("out.dat","w");
	fprintf (wf,"%d ",fun(b));
	fprintf (wf,"%d",fun(c));
	fclose(wf);
	/*******************************/
}
