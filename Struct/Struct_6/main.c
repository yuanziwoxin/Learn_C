#include <stdio.h>
#include <stdlib.h>
#define LEN sizeof(struct Student)

/*
������̬����
дһ����������һ����3��ѧ�����ݵĵ���̬���� 
*/

struct Student
{
	long num;
	float score;
	struct Student *next;
};

int n;//ȫ�ֱ��� 

int main()
{
	struct Student *create(void);
	void print(struct Student *head);//��ӡ�����е�����ѧ����Ϣ 
	struct Student *pt;
	pt=create();
	printf("\n%ld %5.1f\n",pt->num,pt->score); 
	print(pt);//�����̬�����е�����ѧ����Ϣ 
	return 0;
}

/*
������̬���� 
˼·��
�� p1 ָ���¿��ٵĽ�㣬p2ָ�����������һ����㣬�� p1 ��ָ��Ľ�������� p2 ��ָ��Ľ����棬
��"p2->next=p1;"��ʵ�֡� 
*/
struct Student *create(void)  //������̬����ĺ��� 
{
	struct Student *head;
	struct Student *p1,*p2;
	n=0;
	/*
	(1) malloc���ص��ǲ�ָ���κ��������ݵ�ָ��(void *����)
	(2) ��(struct Student *)��������Ϊ��ʹmalloc���ص�ָ��ת��Ϊstruct Student�������ݵ�ָ�롣 
	(3) ע����������ġ�* ���Ų�����ʡ�ԣ�������ת����struct Student�����ˣ�������ָ�����͡�
	(4) ���ڱ���ϵͳ��ʵ����ʽ������ת��������Ҳ����д�� p1=p2=malloc(LEN); 
	*/ 
	p1=p2=(struct Student *)malloc(LEN);//����һ���µ�Ԫ
	scanf("%ld %f",&p1->num,&p2->score); //�����1��ѧ����ѧ�źͳɼ�
	head=NULL;
	while(p1->num!=0)	//Լ����������ѧ��Ϊ0����������Ĺ�����ɣ��ý�㲻Ӧ���ӵ������� 
	{
		n=n+1;
		if(n==1)
		{
			head=p1;
		} 
		else
		{
			p2->next=p1;
		}
		p2=p1;
		p1=(struct Student *)malloc(LEN); //�����µĶ�̬�洢��������ʼ��ַ����p1; 
		scanf("%d %f",&p1->num,&p1->score); //��������ѧ����ѧ�źͳɼ� 
	} 
	p2->next=NULL;
	return head;
} 

//��ӡ�����е�����ѧ����Ϣ 


void print(struct Student *head) //�������ĺ���  
{
	struct Student *p;
	p=head;
	printf("\nThe all %d records are:\n",n);
	while(p!=NULL)
	{
		printf("%ld %5.1f\n",p->num,p->score);
		p=p->next;
	}
} 
