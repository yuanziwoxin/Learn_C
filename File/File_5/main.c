#include <stdio.h>
#include <stdlib.h>
#define SIZE 3
/*
�Ӽ�������10��ѧ�����й����ݣ�Ȼ�������ת�浽�����ļ��У�Ȼ����ļ��ж�ȡ������(����д�����Զ�������ʽ) 
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
	//д�ļ� ���Զ�������ʽ�� 
	for(i=0;i<SIZE;i++)
	{
		scanf("%s %d %d %s",stu[i].name,&stu[i].num,&stu[i].age,stu[i].address);
		//ע�⣺������ڴ�д���ļ��������Ƕ�������ʽ 
		if(fwrite(&stu[i],sizeof(struct Student),1,fp)!=1)//ÿ�ζ����������1���򱨴� 
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
	//���ļ����Զ�������ʽ�� 
	for(i=0;i<SIZE;i++)
	{
		//ע�⣺������ļ������ڴ��е������Ƕ�������ʽ 
		if(fread(&student[i],sizeof(struct Student),1,fp1)!=1 )
		{
			printf("file read error!\n");
		}
		printf("%-10s%-6d%-6d%s\n",student[i].name,student[i].num,student[i].age,student[i].address);
	}
	fclose(fp1);
	return 0;
}
