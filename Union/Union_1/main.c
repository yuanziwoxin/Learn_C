#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 2     //定义人员的人数 

/*
有若干个人员的数据，其中有学生和教师。学生的数据中包括：姓名，号码，性别，职业，班级。
教师的数据包括：姓名，号码，性别，职业，职称（与学生不同之处）。要求用一个表格来处理。 
*/ 

struct Person
{
	long num;
	char name[20];
	char sex;
	char job[20];
	union Category   //共用体 
	{
		int class_num;
		char position[20];
	} category;
} person[2];

int main()
{
	struct Person * input_msg();
	int print_msg(struct Person *p);
	print_msg(input_msg());//输入和输出人员信息 
	return 0;
}
/*
问题1：是否可以通过p[i].num的形式引用结构体变量的成员？p为结构体数组。 答案：可以 
问题2：注意引用共同体的成员的方式（貌似只有"共同体变量名.共同体成员名"这一种方式）。 
问题3：注意结构体变量的成员是数组时，"结构体变量名.成员名"表示的是地址。 （如这里的person[i].name就是地址） 
*/
/* 
//方法一：使用p->num的方式引用结构体数组元素的成员。 
struct Person * input_msg()
{
	struct Person *p; 
	p=person;
	int i;
	for(i=0;i<N;i++,p++)
	{
		printf("Please enter the information of person:\n");
		scanf("%ld %s %c %s",&p->num,p->name,&p->sex,p->job);
		if(strcmp("student",p->job)==0)
		{
			scanf("%d",&p->category.class_num);
		}
		else if(strcmp("teacher",p->job)==0)
		{
			scanf("%s",p->category.position);	
		}
		else
		{
			printf("Input Error!\n");
		}
	} 
	p=person;//注意这里一定要将person重新赋值给p, 不然p所指向的是p[3],已经越界了。 
	return p;
} 

int print_msg(struct Person *p)
{
	int i;
	printf("\nThe information is as follows:\n");
	for(i=0;i<N;i++,p++)
	{
		if(strcmp(p->job,"student")==0)
		{
			printf("%-6ld %-10s %-4c %-10s %-10d\n",p->num,p->name,p->sex,p->job,p->category.class_num);
		}
		if(strcmp(p->job,"teacher")==0)
		{
			printf("%-6ld %-10s %-4c %-10s %-10s\n",p->num,p->name,p->sex,p->job,p->category.position);
		}
	}
	return 0;	
}
*/
//方法二：使用p[i].num的方式引用结构体数组元素的成员。 
struct Person * input_msg()
{
	struct Person *p; 
	p=person;//注意：person是结构体数组名，代表的是结构体数组首元素的地址（&person[0]）,是一个地址常量，是不可变的。 
	int i;
	for(i=0;i<N;i++)
	{
		printf("Please enter the information of person:\n");
		scanf("%ld %s %c %s",&p[i].num,p[i].name,&p[i].sex,p[i].job);
		if(strcmp("student",p[i].job)==0)
		{
			scanf("%d",&p[i].category.class_num);
		}
		else if(strcmp("teacher",p[i].job)==0)
		{
			scanf("%s",p[i].category.position);	
		}
		else
		{
			printf("Input Error!\n");
		}
	} 
	p=person;//注意这里一定要将person重新赋值给p, 不然p所指向的是p[3],已经越界了。 
	return p;//这里直接返回person也是可以的。 
} 

int print_msg(struct Person *p)
{
	int i;
	printf("\nThe information is as follows:\n");
	for(i=0;i<N;i++)
	{
		if(strcmp(p[i].job,"student")==0)
		{
			//格式'%-6d'表示以十进制整数形式输出，占6列，数据向左对齐。 
			printf("%-6ld %-10s %-4c %-10s %-10d\n",p[i].num,p[i].name,p[i].sex,p[i].job,p[i].category.class_num);
		}
		if(strcmp(p[i].job,"teacher")==0)
		{
			printf("%-6ld %-10s %-4c %-10s %-10s\n",p[i].num,p[i].name,p[i].sex,p[i].job,p[i].category.position);
		}
	}
	return 0;	
}
