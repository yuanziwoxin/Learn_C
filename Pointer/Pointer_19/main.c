#include <stdio.h>
#include <stdlib.h>

/*
������̬���飬����5��ѧ���ĳɼ���������һ����������������޵���60�ֵģ�������ϸ�ĳɼ��� 
*/
int main()
{
	int search(int n,float *scores);
	//���ٶ�̬�ڴ���������ַת����int *�ͣ�Ȼ�����scores�С� 
	float *scores=(float *)malloc(5*sizeof(float)); 
	int i;
	printf("Please enter 5 students'scores:\n"); 
	while(i<5)					//ѭ������5��ѧ���ĳɼ��� 
	{
		scanf("%f",scores+i++);
	}
	for(i=0;i<5;i++)
	{
		//scores����һ���̶��ĵ�ַ������˵��ָ�볣����������һֱ���� &scores[0]��
		printf("%5.1f\t",*(scores+i)); 
	}
	printf("\n");
	search(5,scores);	 
	return 0;
}

int search(int n,float *scores)
{
	int i=0;//ʹ��whileѭ��ʱ����ѭ��������Ҫ���˸���ֵ�� 
	printf("The scores of failed are:\n");
	while(i<n)
	{
		if(*(scores+i)<60.0)
			printf("%5.1f\t",*(scores+i));
		i++; 
	}
	return 0;
}
