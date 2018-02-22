#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h> //使用了bool类型 

int main()
{
	float scores[][4]={{64,96,85,59},{86,78,84,76},{56,86,75,84}};
	//函数声明，num为用户输入的学生序号，student为指向一维数组的指针变量，其初始指向scores[0],即指向二维数组scores的第0行。
	float *search(int num,float (*student)[4]);//返回值为指针类型，返回&scores[num][0],即要查找的该行（该学生所有成绩）的首列（第一个成绩）的地址。 
	int input_scores(float *p);
	int num,i,n;
	float *p1,*p2;
	printf("Please enter the number of the student: ");
	scanf("%d",&num);
	//调用search函数，得到返回值，&scores[num][0],即要查找的该行（该学生所有成绩）的首列（第一个成绩）的地址。 
	p1=search(num,scores);
	//输出要查找学生的所有成绩
	printf("The scores of No.%d is:\n",num);
	input_scores(p1);
	//查找有不及格课程的学生，输出其序号及其所有成绩
	printf("\nThe list of failed students is as follows:\n");
	for(n=0;n<3;n++)
	{
		bool flag=true;
		p2=search(n,scores);
		for(i=0;i<4;i++)
		{
			if(*(p2+i)<60.0) 
			{
				flag=false;
				continue;	
			}
		}
		if(flag==false)
		{
			printf("The No.%d:\n",n);
	        input_scores(p2);	
		}
	} 
	return 0;
}

float *search(int num,float (*student)[4])
{
	float *pt;
	pt=*(student+num);//student是指向一维数组的指针变量，所以student+num是指向二维数组的第num行的。 
	return pt;
}

int input_scores(float *p)
{
	int i;
	for(i=0;i<4;i++)
	{
		printf("%5.1f",*(p+i));
	}
	printf("\n");
}


 
