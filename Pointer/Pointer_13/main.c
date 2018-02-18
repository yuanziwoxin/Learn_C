#include <stdio.h>
#include <stdlib.h>

/*
有a个学生，每个学生有b门课程的成绩。要求在用户输入学生序号以后，能输出该学生的全部成绩。用指针函数来实现。 
*/
int main()
{
	int *p(int num,int (*student)[4]);//student为指向包含4个元素的一维数组的指针变量。 
	int scores[][4]={{68,69,85,84},{96,58,76,86},{84,69,85,76},{85,86,78,96},{89,89,98,86}};
	int *c,i,n;
	printf("Please enter a number: ");
	scanf("%d",&n);
	c=p(n,scores);
	for(i=0;i<4;i++)
	{
		printf("%d\t",*(c+i)); 
	}
	return 0;
}

int *p(int num,int (*student)[4])
{
	int *pt;
	//student+num表示scores数组的num行的首元素地址，即&scores[num],
	//而*(student+num)是num行0列的地址，即&scores[num][0]。
	pt=*(student+num); 
	return pt;
}
