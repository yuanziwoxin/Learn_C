#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
（1）有a个学生，每个学生有b门课程的成绩。 从其中的学生中，找出其中有不及格课程的学生及其学生号。 (相对于Pointer_14的另一种方法)
	思路：（1）先后3次调用search函数，在search函数中检查该学生是否有不及格课程;
		  （2）若有不及格课程，则返回该学生的0号课程成绩的地址&scores[num][0]; 
		  	   若没有则返回NULL。 
		  （3）在main函数中检查返回值，输出不及格学生4门课程的成绩。 
*/

int main()
{
	float scores[][4]={{64,96,85,69},{86,78,58,76},{66,56,75,84}};
	//函数声明，num为学生序号，student为指向一维数组的指针变量，其初始指向scores[0],即指向二维数组scores的第0行。
	float *search(int num,float (*student)[4]);//返回值为指针类型，返回&scores[num][0],即要查找的该行（该学生所有成绩）的首列（第一个成绩）的地址。 
	int input_scores(float *p);
	int n;
	float *p1;
	//查找有不及格课程的学生，输出其序号及其所有成绩
	printf("The list of failed students is as follows:\n");
	for(n=0;n<3;n++)
	{
		p1=search(n,scores);
		if(p1!=NULL)
		{
			printf("The No.%d:\n",n);
			input_scores(p1);
		}
	}
	return 0;
}

//查找存在不及格课程的学生 
float *search(int num,float (*student)[4])
{
	int i;
	float *p;
	float *result=NULL;//先使result的值为NULL。 
	p=*(student+num);//p指向student[num]该行的0列地址，即&scores[num][0]。 
	for(i=0;i<4;i++)
	{
		if(*(p+i)<60.0) 
		{
			result=p;  //如果有不及格课程，使result指向scores[num][0]。 
		}
	}
	return result;	
}

//输出某个学生的所有成绩 
int input_scores(float *p)
{
	int i;
	for(i=0;i<4;i++)
	{
		printf("%5.1f",*(p+i));
	}
	printf("\n");
} 

