/*
**********************************************************
最后的输出结果精度与答案有出入，小数点后第四位之后有问题 
********************************************************** 
*/
/*一15、请编写一个函数fun()，它的功能是：根据输入的运输距离计算运费。运输公司对用户计算运输费用。路程越远，
每单位距离运费越低。没有折扣情况下每运输一个单位的距离，运费为10。
设距离用S表示，折扣标准如下：
             S<250             没有折扣
             250≤S<500        2%折扣
			500≤S<1000       5%折扣
			1000≤S<2000      8%折扣
			2000≤S<3000      10%折扣
			3000≤S           15%折扣
	根据输入的运输距离，函数返回对应运费。
例如：若输入100<CR>（<CR>为回车键），函数将返回1000.000000；若输入800<CR>（<CR>为回车键），函数将返回7600.000000；
若输入3456<CR>（<CR>为回车键），函数将返回29376.000000。
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
		case 1: d=2;break;
		case 2: 
		case 3: d=5;break;
		case 4: 
		case 5: 
		case 6: 
		case 7: d=8;break;
		case 8: 
		case 9: 
		case 10: 
		case 11: d=10;break;
		case 12: d=15;break;		
	}
	w=x*(1.0-d/100.0)*10.0;
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
	fprintf (wf,"%lf ",fun(222));
	fprintf (wf,"%lf ",fun(444));
	fprintf (wf,"%lf ",fun(777));
	fprintf (wf,"%lf ",fun(1222));
	fprintf (wf,"%lf ",fun(2333));
	fprintf (wf,"%lf",fun(4444));
	fclose(wf);
	/*******************************/
}
