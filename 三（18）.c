/*三18、请编写一个函数fun()，它的功能是：统计不高于均分的人数。已知结构体类型如下：
struct student
{
	char num[11];	/*学号*/
//	int grade;		/*成绩*/
//};
//主函数已定义并初始化了10位学生的数据（包含num和grade），fun函数返回不高于（低于等于）成绩均分的人数。
#include"stdio.h"
struct student
{
	char num[11];	/*学号*/
	int grade;		/*成绩*/
};
int fun(struct student s[10])
{
	int i,count=0;
	double ave = 0;
	for(i=0;i<10;i++)
	{
		ave += s[i].grade;
	}
	ave = ave/10;
	for(i=0;i<10;i++)
	{
		if(s[i].grade<=ave)
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
		"1004",84,
		"1005",88,	
		"1006",89,
		"1007",83,
		"1008",88,
		"1009",86,
		"1010",90
	};
	printf("不高于均分的人数为：%d\n",fun(s));
	/*******************************/
	wf=fopen("out.dat","w");
	for(i=0;i<10;i++)
		s[i].grade =70+i;
	fprintf (wf,"%d ",fun(s));
	for(i=0;i<10;i++)
		s[i].grade =70;
	fprintf (wf,"%d",fun(s));
	fclose(wf);
	/*******************************/
}
