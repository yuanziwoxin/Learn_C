#include <stdio.h>
#include <stdlib.h>

/*
��������ѡ�ˣ�ÿ��ѡ��ֻ��ͶƱѡһ�ˣ�Ҫ���дһ��ͳ��ѡƱ�ĳ����Ⱥ����뱻ѡ�˵����������������˵ĵ�Ʊ����� 
*/ 
struct Person
{
	char name[20];
	int count;
} leader[3]={"Liu",0,"Zhang",0,"Sun",0}; 

int main()
{
	char *name;
	int i,j;
	for(i=0;i<5;i++)
	{
		scanf("%s",name);
		for(j=0;j<3;j++)
		{
			//�����������ֺ�ĳ����ѡ�˵�������ͬ����ú�ѡ�˵�Ʊ����1 
			if(strcmp(name,leader[j].name)==0)
				leader[j].count++;
		}
	}
	printf("\nResult:\n");
	for(j=0;j<3;j++)
	{
		printf("%s: %d\n",leader[j].name,leader[j].count);
	}
	return 0;
}
