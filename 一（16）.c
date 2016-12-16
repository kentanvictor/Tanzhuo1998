/*
**********************************************************
double 精确过 float 
********************************************************** 
*/
/*一16、请编写一个函数fun()，它的功能是：根据输入的运输距离计算运费。运输公司对用户计算运输费用。
路程越远，每单位距离运费越低。没有折扣情况下每运输一个单位的距离，运费为5。
设距离用S表示，折扣标准如下：
             S<250             没有折扣
             250≤S<500        3%折扣
			500≤S<1000       6%折扣
			1000≤S<2000      9%折扣
			2000≤S<3000      11%折扣
			3000≤S           16%折扣
	根据输入的运输距离，函数返回对应运费。
例如：若输入100<CR>（<CR>为回车键），函数将返回500.000000；
若输入800<CR>（<CR>为回车键），函数将返回3760.000000；若输入3456<CR>（<CR>为回车键），函数将返回14515.200195。
*/ 
#include"stdio.h"
double fun(double x)
{
	double w;
	int c,d;
	if(x>=3000.0)
	{
		c=12;
	}
	else if(x<=250.0)
	{
		c=0;
	}
	else 
	{
		c=x/250.0;
	}
	switch(c)
	{
		case 0: d=0;break;
		case 1: d=3;break;
		case 2: 
		case 3: d=6;break;
		case 4: 
		case 5: 
		case 6: 
		case 7: d=9;break;
		case 8: 
		case 9: 
		case 10: 
		case 11: d=11;break;
		case 12: d=16;break;		
	}
	w=x*(1.0-d/100.0)*5.0;
	return w;
}
void main()
{
	FILE *wf;
	double x,y;
	printf("请输入运输距离：");
	scanf("%lf",&x);
	y=fun(x);
	printf("%lf\n",y);
	/*******************************/
	wf=fopen("out.dat","w");
	fprintf (wf,"%lf ",fun(111));
	fprintf (wf,"%lf ",fun(333));
	fprintf (wf,"%lf ",fun(666));
	fprintf (wf,"%lf ",fun(1111));
	fprintf (wf,"%lf ",fun(2222));
	fprintf (wf,"%lf",fun(3333));
	fclose(wf);
	/*******************************/
}
