/*
三20、请编写一个函数fun()，它的功能是：统计成绩不合格的人数。已知结构体类型如下：
struct student
{
	char num[11];	/*学号*/
//	int grade;		/*成绩*/
//};
//主函数已定义并初始化了10位学生的数据（包含num和grade），fun函数返回成绩不合格（小于60）的人数。
#include"stdio.h"
struct student
{
	char num[11];	/*学号*/
	int grade;		/*成绩*/
};
int fun(struct student s[10])
{
	int i,count=0;
	for(i=0;i<10;i++)
	{
		if(s[i].grade<60)
			count++;
	}
	return count;
}
void main()
{
	FILE *wf;
	int i;
	struct student s[10]=
	{
		"1001",83,
		"1002",85,
		"1003",89,
		"1004",54,
		"1005",88,	
		"1006",89,
		"1007",33,
		"1008",88,
		"1009",56,
		"1010",90
	};
	printf("成绩不合格的人数为：%d\n",fun(s));
	/*******************************/
	wf=fopen("out.dat","w");
	for(i=0;i<10;i++)
		s[i].grade =64-i;
	fprintf (wf,"%d ",fun(s));
	for(i=0;i<10;i++)
		s[i].grade =83-3*i;
	fprintf (wf,"%d",fun(s));
	fclose(wf);
	/*******************************/
}
