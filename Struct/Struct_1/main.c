#include <stdio.h>
#include <stdlib.h>
/*
�ṹ������ĳ�ʼ�������� 
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
	struct Student student1={1001,"Lerbron James",'M',"��������"}; 
	//".name"��������ṹ�����b�еĳ�Աb.name������δָ����ʼ������ֵ�ͳ�Ա��ϵͳ��ʼ��Ϊ0��
	//�ַ��ͳ�Ա��ϵͳ��ʼ��Ϊ'\0',ָ���ͳ�Ա��ϵͳ��ʼ��ΪNULL�� 
	struct Student student2={1002,.name="Kobe"}; //�Խṹ����ĳһ��Ա��ʼ�����ڳ�Ա��ǰ�г�Ա�����"." 
	printf("No.%d\nName:%s\nSex:%c\nAddress:%s\n",student1.num,student1.name,student1.sex,student1.addr);
	printf("No.%d\nName:%s\nSex:%c\nAddress:%s\n",student2.num,student2.name,student2.sex,student2.addr);
	return 0;	
} 
