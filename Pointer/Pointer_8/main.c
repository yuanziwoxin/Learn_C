#include <stdio.h>
#include <stdlib.h>

/* 
����һ�����Ͽγ̲������ѧ������������ǵ�ȫ���γ̵ĳɼ��� 
 */

int main() {
	void search(float (*p)[4],int m,int n);//m��ʾѧ����������n��ʾ���ԵĿ�Ŀ������ 
	float score[3][4]={{54,63,96,75},{69,86,75,84},{68,96,59,76}}; //�����ά���麯��score; 
	search(score,3,4);//score��ʵ�Σ���ָ��score[0],��score[0]�ĵ�ַ�����β�p; 
	return 0;
}
void search(float (*p)[4],int m,int n)
{
	int i,j,flag;//flag�����ж�ĳѧ���ĳɼ��Ƿ���һ�����ϵĲ�����������flagΪ1������Ϊ0�� 
	for(i=0;i<m;i++)
	{
		flag=0;
		for(j=0;j<n;j++)
		{
			if(*(*(p+i)+j)<60)    //*(*(p+i)+j)����score[i][j]
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
