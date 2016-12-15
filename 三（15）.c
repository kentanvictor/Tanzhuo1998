/*
三15、请编写一个函数fun()，它的功能是：求成绩最高的学生。已知结构体类型如下：
	struct student
	{
		char num[11];
		int grade;
	};
	输入有两个学生的数据（包含num和grade），函数返回最高分所对应的学生数据。
	例如：输入zhangsan<CR>80<CR>lisi<CR>90<CR>（<CR>为回车键），函数将返回lisi的数据。
*/
#include"stdio.h"
struct student
{
	char num[11];
	int grade;
};
struct student fun(struct student s[])
{
	if(s[0].grade>s[1].grade)
		return s[0];
	else
		return s[1];
}
void main()
{
	FILE *wf;
	struct student s1[2],s;
	struct student s11[2]={"aaaa",50,"bbbb",60};
	struct student s111[2]={"aaaa",60,"bbbb",50};
	int i;
	for(i=0;i<2;i++)
	{
		printf("请输入第%d位学生的数据：",i+1);
		scanf("%s%d",s1[i].num,&s1[i].grade);
	}
	s=fun(s1);
	printf("最高分学生的数据：%s:%d\n",s.num,s.grade);
	/*******************************/
	wf=fopen("out.dat","w");
	s=fun(s11);
	fprintf (wf,"%s:%d ",s.num,s.grade);
	s=fun(s111);
	fprintf (wf,"%s:%d",s.num,s.grade);
	fclose(wf);
	/*******************************/
}
