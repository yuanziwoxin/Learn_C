#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 2     //������Ա������ 

/*
�����ɸ���Ա�����ݣ�������ѧ���ͽ�ʦ��ѧ���������а��������������룬�Ա�ְҵ���༶��
��ʦ�����ݰ��������������룬�Ա�ְҵ��ְ�ƣ���ѧ����֮ͬ������Ҫ����һ����������� 
*/ 

struct Person
{
	long num;
	char name[20];
	char sex;
	char job[20];
	union Category   //������ 
	{
		int class_num;
		char position[20];
	} category;
} person[2];

int main()
{
	struct Person * input_msg();
	int print_msg(struct Person *p);
	print_msg(input_msg());//����������Ա��Ϣ 
	return 0;
}
/*
����1���Ƿ����ͨ��p[i].num����ʽ���ýṹ������ĳ�Ա��pΪ�ṹ�����顣 �𰸣����� 
����2��ע�����ù�ͬ��ĳ�Ա�ķ�ʽ��ò��ֻ��"��ͬ�������.��ͬ���Ա��"��һ�ַ�ʽ���� 
����3��ע��ṹ������ĳ�Ա������ʱ��"�ṹ�������.��Ա��"��ʾ���ǵ�ַ�� ���������person[i].name���ǵ�ַ�� 
*/
/* 
//����һ��ʹ��p->num�ķ�ʽ���ýṹ������Ԫ�صĳ�Ա�� 
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
	p=person;//ע������һ��Ҫ��person���¸�ֵ��p, ��Ȼp��ָ�����p[3],�Ѿ�Խ���ˡ� 
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
//��������ʹ��p[i].num�ķ�ʽ���ýṹ������Ԫ�صĳ�Ա�� 
struct Person * input_msg()
{
	struct Person *p; 
	p=person;//ע�⣺person�ǽṹ����������������ǽṹ��������Ԫ�صĵ�ַ��&person[0]��,��һ����ַ�������ǲ��ɱ�ġ� 
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
	p=person;//ע������һ��Ҫ��person���¸�ֵ��p, ��Ȼp��ָ�����p[3],�Ѿ�Խ���ˡ� 
	return p;//����ֱ�ӷ���personҲ�ǿ��Եġ� 
} 

int print_msg(struct Person *p)
{
	int i;
	printf("\nThe information is as follows:\n");
	for(i=0;i<N;i++)
	{
		if(strcmp(p[i].job,"student")==0)
		{
			//��ʽ'%-6d'��ʾ��ʮ����������ʽ�����ռ6�У�����������롣 
			printf("%-6ld %-10s %-4c %-10s %-10d\n",p[i].num,p[i].name,p[i].sex,p[i].job,p[i].category.class_num);
		}
		if(strcmp(p[i].job,"teacher")==0)
		{
			printf("%-6ld %-10s %-4c %-10s %-10s\n",p[i].num,p[i].name,p[i].sex,p[i].job,p[i].category.position);
		}
	}
	return 0;	
}
