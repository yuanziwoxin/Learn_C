#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
ͨ��ָ��ṹ�������ָ���������ṹ������г�Ա����Ϣ 
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
	struct Student *p;//����ָ��struct Student�������ݵ�ָ�����p 
	p=&stu_1;
	stu_1.num=10101;
	strcpy(stu_1.name,"Liu");//���ַ�����ֵ������stu_1.name��ֵ 
	stu_1.sex='M';
	stu_1.score=80;
	//(1)ͨ���ṹ�������stu_1�������ĳ�Ա 
	printf("No.%ld\nname:%s\nsex:%c\nscore:%f\n",stu_1.num,stu_1.name,stu_1.sex,stu_1.score); 
	//(2)ͨ��ָ��ṹ�������ָ������������ĳ�Ա 
	printf("No.%ld\nname:%s\nsex:%c\nscore:%f\n",(*p).num,(*p).name,(*p).sex,(*p).score); 
	//(3)�����(*p).name��p->name�����p->name��ʾp��ָ��Ľṹ������е�num��Ա��"->"��Ϊָ��������� 
	printf("No.%ld\nname:%s\nsex:%c\nscore:%f\n",p->num,p->name,p->sex,p->score); 
	return 0;
}
