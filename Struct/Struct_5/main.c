#include <stdio.h>
#include <stdlib.h>

/*
建立一个简单的静态链表 

所有结点都是在程序中定义的，不是临时开辟的，也不能用完后释放，这种链表称为“静态链表” 
*/

struct Student
{
	int num;
	float score;
	struct Student *next;//next是指针变量，指向结构体变量 
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
	head=&a;	//将a的起始地址赋给头指针head 
	a.next=&b;  //将b的起始地址赋给a结点的next成员 
	b.next=&c;
	c.next=NULL;//c结点的next成员不存放其他结点地址 
	p=head;		//使p也指向a结点 
	while(p!=NULL) //输出完c结点后p的值为NULL，循环终止 
	{
		printf("%5d %5.1f\n",p->num,p->score);
		p=p->next; //使p指向下一个结点 
	}
	return 0;
}
