#include <stdio.h>
#include <stdlib.h>

/*
����һ���򵥵ľ�̬���� 

���н�㶼���ڳ����ж���ģ�������ʱ���ٵģ�Ҳ����������ͷţ����������Ϊ����̬���� 
*/

struct Student
{
	int num;
	float score;
	struct Student *next;//next��ָ�������ָ��ṹ����� 
}; 
int main()
{
	struct Student a,b,c,*head,*p;
	a.num=101;
	a.score=86.5;
	b.num=102;
	b.score=75.5;
	c.num=103;
	c.score=96.5;
	head=&a;	//��a����ʼ��ַ����ͷָ��head 
	a.next=&b;  //��b����ʼ��ַ����a����next��Ա 
	b.next=&c;
	c.next=NULL;//c����next��Ա�������������ַ 
	p=head;		//ʹpҲָ��a��� 
	while(p!=NULL) //�����c����p��ֵΪNULL��ѭ����ֹ 
	{
		printf("%5d %5.1f\n",p->num,p->score);
		p=p->next; //ʹpָ����һ����� 
	}
	return 0;
}
