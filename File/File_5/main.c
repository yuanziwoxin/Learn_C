#include <stdio.h>
#include <stdlib.h>
#define SIZE 3
/*
从键盘输入10个学生的有关数据，然后把它们转存到磁盘文件中，然后从文件中读取出来；(读和写都是以二进制形式) 
*/
struct Student
{
 	char name[20];
 	int num;
 	int age;
 	char address[20];
} stu[SIZE],student[SIZE];


int main()
{
	FILE *fp,*fp1;
	int i;
	if((fp=fopen("file1","wb"))==NULL)
	{
		printf("cannot open the file!\n");
		exit(0);
	}
	printf("Enter the imformation of students:\n");
	//写文件 （以二进制形式） 
	for(i=0;i<SIZE;i++)
	{
		scanf("%s %d %d %s",stu[i].name,&stu[i].num,&stu[i].age,stu[i].address);
		//注意：这里从内存写入文件的内容是二进制形式 
		if(fwrite(&stu[i],sizeof(struct Student),1,fp)!=1)//每次读的数据项不是1，则报错。 
		{
			printf("file write error!\n");
		}
	}
	fclose(fp);
	printf("the messages of the file are:\n");
	if((fp1=fopen("file1","rb"))==NULL)
	{
		printf("cannot open the file!\n");
		exit(0);
	}
	//读文件（以二进制形式） 
	for(i=0;i<SIZE;i++)
	{
		//注意：这里从文件读入内存中的内容是二进制形式 
		if(fread(&student[i],sizeof(struct Student),1,fp1)!=1 )
		{
			printf("file read error!\n");
		}
		printf("%-10s%-6d%-6d%s\n",student[i].name,student[i].num,student[i].age,student[i].address);
	}
	fclose(fp1);
	return 0;
}
