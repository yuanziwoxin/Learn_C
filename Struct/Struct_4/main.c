#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 3

/*
��n���ṹ��������ں�ѧ��ѧ�š�������3�ſγ̵ĳɼ���Ҫ�����ƽ���ɼ���ߵ�ѧ���ĳɼ�����Ϣ������ѧ�š�������3�ſγ̳ɼ���ƽ���ɼ��� 
*/
struct Student
{
	long num;
	char name[20];
	float score[3];
	float average;
};

int main()
{
	void input(struct Student stu[]);
	struct Student max(struct Student stu[]);
	void print(struct Student stu);
	struct Student stu[N];
	input(stu);
	print(max(stu)); 
	return 0;
}
//���ѧ���ĸ�������Ϣ�������ѧ��ƽ���ɼ��� 
void input(struct Student stu[])
{
	int i;
	printf("Please enter the students'num,name and three subject's score:\n");
	for(i=0;i<N;i++)
	{
		scanf("%ld %s %f %f %f",&stu[i].num,&stu[i].name,&stu[i].score[0],&stu[i].score[1],&stu[i].score[2]);
		stu[i].average=(stu[i].score[0]+stu[i].score[1]+stu[i].score[2])/3.0;
	}
}
//�ҳ�ƽ���ɼ���ߵ�ѧ�� 
struct Student max(struct Student stu[])
{
	int i;
	float max;
	max=stu[0].average;
	struct Student max_stu=stu[0];
	for(i=0;i<N;i++)
	{
		if(stu[i].average>max)
		{
			max=stu[i].average;
			max_stu=stu[i];
		} 
			
	}
	return max_stu;
} 
//���ƽ���ɼ���ߵ�ѧ����Ϣ 
void print(struct Student stu)
{
	printf("The student whose average score is the highest is:\n");
	printf("Number: %ld\nName: %s\nThree subject's Score: %5.1f,%5.1f,%5.1f\nAverage score: %5.1f",stu.num,stu.name,stu.score[0],stu.score[1],stu.score[2],stu.average);
} 
