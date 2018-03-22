#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
通过指向结构体变量的指针变量输出结构体变量中成员的信息 
*/ 
int main()
{
	struct Student
	{
		long num;
		char name[20];
		char sex;
		float score;
	}; 
	struct Student stu_1;
	struct Student *p;//定义指向struct Student类型数据的指针变量p 
	p=&stu_1;
	stu_1.num=10101;
	strcpy(stu_1.name,"Liu");//用字符串赋值函数给stu_1.name赋值 
	stu_1.sex='M';
	stu_1.score=80;
	//(1)通过结构体变量名stu_1访问它的成员 
	printf("No.%ld\nname:%s\nsex:%c\nscore:%f\n",stu_1.num,stu_1.name,stu_1.sex,stu_1.score); 
	//(2)通过指向结构体变量的指针变量访问他的成员 
	printf("No.%ld\nname:%s\nsex:%c\nscore:%f\n",(*p).num,(*p).name,(*p).sex,(*p).score); 
	//(3)允许把(*p).name用p->name替代，p->name表示p所指向的结构体变量中的num成员。"->"称为指向运算符。 
	printf("No.%ld\nname:%s\nsex:%c\nscore:%f\n",p->num,p->name,p->sex,p->score); 
	return 0;
}
