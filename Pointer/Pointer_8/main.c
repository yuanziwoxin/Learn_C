#include <stdio.h>
#include <stdlib.h>

/* 
查找一门以上课程不及格的学生，并输出他们的全部课程的成绩。 
 */

int main() {
	void search(float (*p)[4],int m,int n);//m表示学生的人数，n表示考试的科目门数； 
	float score[3][4]={{54,63,96,75},{69,86,75,84},{68,96,59,76}}; //定义二维数组函数score; 
	search(score,3,4);//score作实参，它指向score[0],把score[0]的地址传给形参p; 
	return 0;
}
void search(float (*p)[4],int m,int n)
{
	int i,j,flag;//flag用于判断某学生的成绩是否有一门以上的不及格，若有则flag为1，否则为0； 
	for(i=0;i<m;i++)
	{
		flag=0;
		for(j=0;j<n;j++)
		{
			if(*(*(p+i)+j)<60)    //*(*(p+i)+j)就是score[i][j]
			flag=1;
		}
		if(flag==1)
		{
			printf("No.%d fails,his scores are:\n",i+1);
			for(j=0;j<n;j++)
			{
				printf("%5.1f",*(*(p+i)+j));
			}
			printf("\n");
		}
	}
} 
