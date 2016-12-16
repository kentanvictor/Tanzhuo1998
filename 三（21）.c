/*
三21、请编写一个函数fun()，它的功能是：普提所有成绩。已知结构体类型如下：
struct student
{
	char num[11];	/*学号*/
//	int grade;		/*成绩*/
//};
//主函数已定义并初始化了10位学生的数据（包含num和grade），fun函数实现对所有学生的成绩普提3分。
#include"stdio.h"
struct student
{
	char num[11];	/*学号*/
	int grade;		/*成绩*/
};
int fun(struct student s[10])
{
	int i;
	for(i=0;i<10;i++)
	{
		s[i].grade+=3;
	}
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
	printf("原始成绩为：");
	for(i=0;i<10;i++)
		printf("%s:%d\n",s[i].num,s[i].grade);
	fun(s);
	printf("普提后的成绩为：");
	for(i=0;i<10;i++)
		printf("%s:%d\n",s[i].num,s[i].grade);
	/*******************************/
	wf=fopen("out.dat","w");
	for(i=0;i<10;i++)
	{
		s[i].grade =64-i;
		fprintf (wf,"%d ",s[i].grade);
	}
	fun(s);
	for(i=0;i<10;i++)
	{
		fprintf (wf," %d",s[i].grade);
	}
	fclose(wf);
	/*******************************/
}
