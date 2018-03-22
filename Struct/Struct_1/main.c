#include <stdio.h>
#include <stdlib.h>
/*
结构体变量的初始化和引用 
*/
int main()
{
	struct Student
	{
		int num;
		char name[20];
		char sex;
		char addr[50];
	};
	struct Student student1={1001,"Lerbron James",'M',"克利夫兰"}; 
	//".name"隐含代表结构体变量b中的成员b.name。其他未指定初始化的数值型成员被系统初始化为0，
	//字符型成员被系统初始化为'\0',指针型成员被系统初始化为NULL。 
	struct Student student2={1002,.name="Kobe"}; //对结构体中某一成员初始化，在成员名前有成员运算符"." 
	printf("No.%d\nName:%s\nSex:%c\nAddress:%s\n",student1.num,student1.name,student1.sex,student1.addr);
	printf("No.%d\nName:%s\nSex:%c\nAddress:%s\n",student2.num,student2.name,student2.sex,student2.addr);
	return 0;	
} 
