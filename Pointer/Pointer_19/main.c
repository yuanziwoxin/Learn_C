#include <stdio.h>
#include <stdlib.h>

/*
建立动态数组，输入5个学生的成绩，另外用一个函数检查其中有无低于60分的，输出不合格的成绩。 
*/
int main()
{
	int search(int n,float *scores);
	//开辟动态内存区，将地址转换成int *型，然后放在scores中。 
	float *scores=(float *)malloc(5*sizeof(float)); 
	int i;
	printf("Please enter 5 students'scores:\n"); 
	while(i<5)					//循环输入5个学生的成绩。 
	{
		scanf("%f",scores+i++);
	}
	for(i=0;i<5;i++)
	{
		//scores代表一个固定的地址，或者说是指针常量，所以其一直代表 &scores[0]。
		printf("%5.1f\t",*(scores+i)); 
	}
	printf("\n");
	search(5,scores);	 
	return 0;
}

int search(int n,float *scores)
{
	int i=0;//使用while循环时，其循环变量不要忘了赋初值。 
	printf("The scores of failed are:\n");
	while(i<n)
	{
		if(*(scores+i)<60.0)
			printf("%5.1f\t",*(scores+i));
		i++; 
	}
	return 0;
}
