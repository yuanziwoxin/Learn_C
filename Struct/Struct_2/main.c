#include <stdio.h>
#include <stdlib.h>

/*
有三个候选人，每个选民只能投票选一人，要求编写一个统计选票的程序，先后输入被选人的姓名，最后输出各人的得票结果。 
*/ 
struct Person
{
	char name[20];
	int count;
} leader[3]={"Liu",0,"Zhang",0,"Sun",0}; 

int main()
{
	char *name;
	int i,j;
	for(i=0;i<5;i++)
	{
		scanf("%s",name);
		for(j=0;j<3;j++)
		{
			//如果输入的名字和某个候选人的名字相同，则该候选人的票数加1 
			if(strcmp(name,leader[j].name)==0)
				leader[j].count++;
		}
	}
	printf("\nResult:\n");
	for(j=0;j<3;j++)
	{
		printf("%s: %d\n",leader[j].name,leader[j].count);
	}
	return 0;
}
