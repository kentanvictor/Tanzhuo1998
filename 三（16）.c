/*
三16、请编写一个函数fun()，它的功能是：求成绩的平均值。已知结构体类型如下：
	struct student
	{
		char num[11];
		int grade;
	};
	输入有两个学生的数据（包含num和grade），函数返回两个学生grade成员的平均值。
例如：输入zhangsan<CR>80<CR>lisi<CR>90<CR>（<CR>为回车键），函数将返回85.000000。
*/
#include"stdio.h"
struct student
{
	char num[11];
	int grade;
};
double fun(struct student s[])
{
	return (s[0].grade+s[1].grade)/2.0;
}
void main()
{
	FILE *wf;
	struct student s[2];
	double ave;
	struct student s11[2]={"aaaa",50,"bbbb",60};
	struct student s111[2]={"aaaa",60,"bbbb",50};
	int i;
	for(i=0;i<2;i++)
	{
		printf("请输入第%d位学生的数据：",i+1);
		scanf("%s%d",s[i].num,&s[i].grade);
	}
	ave=fun(s);
	printf("平均分为：%lf\n",ave);
	/*******************************/
	wf=fopen("out.dat","w");
	ave=fun(s11);
	fprintf (wf,"%lf ",ave);
	ave=fun(s111);
	fprintf (wf,"%lf",ave);
	fclose(wf);
	/*******************************/
}
