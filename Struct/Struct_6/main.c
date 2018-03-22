#include <stdio.h>
#include <stdlib.h>
#define LEN sizeof(struct Student)

/*
建立动态链表
写一个函数建立一个有3名学生数据的单向动态链表 
*/

struct Student
{
	long num;
	float score;
	struct Student *next;
};

int n;//全局变量 

int main()
{
	struct Student *create(void);
	void print(struct Student *head);//打印链表中的所有学生信息 
	struct Student *pt;
	pt=create();
	printf("\n%ld %5.1f\n",pt->num,pt->score); 
	print(pt);//输出动态链表中的所有学生信息 
	return 0;
}

/*
建立动态链表 
思路：
让 p1 指向新开辟的结点，p2指向链表中最后一个结点，把 p1 所指向的结点连接在 p2 所指向的结点后面，
用"p2->next=p1;"来实现。 
*/
struct Student *create(void)  //建立动态链表的函数 
{
	struct Student *head;
	struct Student *p1,*p2;
	n=0;
	/*
	(1) malloc返回的是不指向任何类型数据的指针(void *类型)
	(2) 加(struct Student *)的作用是为了使malloc返回的指针转换为struct Student类型数据的指针。 
	(3) 注意括号里面的“* ”号不可以省略，否则变成转换成struct Student类型了，而不是指针类型。
	(4) 由于编译系统能实现隐式的类型转换，所以也可以写成 p1=p2=malloc(LEN); 
	*/ 
	p1=p2=(struct Student *)malloc(LEN);//开辟一个新单元
	scanf("%ld %f",&p1->num,&p2->score); //输入第1个学生的学号和成绩
	head=NULL;
	while(p1->num!=0)	//约定如果输入的学号为0，则建立链表的过程完成，该结点不应链接到链表中 
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
		p1=(struct Student *)malloc(LEN); //开辟新的动态存储区，把起始地址赋给p1; 
		scanf("%d %f",&p1->num,&p1->score); //输入其他学生的学号和成绩 
	} 
	p2->next=NULL;
	return head;
} 

//打印链表中的所有学生信息 


void print(struct Student *head) //输出链表的函数  
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
