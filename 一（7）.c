
/*

****************************************************************************
仍然可以继续精简，欢迎修改
****************************************************************************

*/ 

/*

一7、请编写一个函数fun()，它的功能是：求一个三角形的面积；若输入的三边长可以构成三角形，

函数返回该三角形的面积，否则返回-1。（提示：求平方根函数：sqrt()）

例如，输入1<CR>2<CR>2<CR>（<CR>为回车键），函数将返回0.968246；输入1<CR>2<CR>3<CR>（<CR>为回车键），

函数将返回-1.000000。

*/
#include"stdio.h"

#include"math.h"

double fun(double a,double b,double c)
{
	double p;
	
	double s;
	
	double d;
	
	d=abs(a-b);
	
	p=(a+b+c)/2.0;
	
	if((a+b)<=c||d>=c)
	{
		return (-1);
	}
	else
	{
		s=sqrt(p*(p-a)*(p-b)*(p-c));
		return s;
	}
	
}

void main()

{

	FILE *wf;

	double a,b,c;

	double S;

	printf("请输入三角形的三边长：");

	scanf("%lf%lf%lf",&a,&b,&c);

	S=fun(a,b,c);

	printf("%lf\n",S);

	/*******************************/

	wf=fopen("out.dat","w");

	fprintf (wf,"%f ",fun(3,4,5));

	fprintf (wf,"%f ",fun(4,5,6));

	fprintf (wf,"%f ",fun(40,55,68));

	fprintf (wf,"%f",fun(400,590,654));

	fclose(wf);

	/*******************************/

}
