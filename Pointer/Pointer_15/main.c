#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
��1����a��ѧ����ÿ��ѧ����b�ſγ̵ĳɼ��� �����е�ѧ���У��ҳ������в�����γ̵�ѧ������ѧ���š� (�����Pointer_14����һ�ַ���)
	˼·����1���Ⱥ�3�ε���search��������search�����м���ѧ���Ƿ��в�����γ�;
		  ��2�����в�����γ̣��򷵻ظ�ѧ����0�ſγ̳ɼ��ĵ�ַ&scores[num][0]; 
		  	   ��û���򷵻�NULL�� 
		  ��3����main�����м�鷵��ֵ�����������ѧ��4�ſγ̵ĳɼ��� 
*/

int main()
{
	float scores[][4]={{64,96,85,69},{86,78,58,76},{66,56,75,84}};
	//����������numΪѧ����ţ�studentΪָ��һά�����ָ����������ʼָ��scores[0],��ָ���ά����scores�ĵ�0�С�
	float *search(int num,float (*student)[4]);//����ֵΪָ�����ͣ�����&scores[num][0],��Ҫ���ҵĸ��У���ѧ�����гɼ��������У���һ���ɼ����ĵ�ַ�� 
	int input_scores(float *p);
	int n;
	float *p1;
	//�����в�����γ̵�ѧ�����������ż������гɼ�
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

//���Ҵ��ڲ�����γ̵�ѧ�� 
float *search(int num,float (*student)[4])
{
	int i;
	float *p;
	float *result=NULL;//��ʹresult��ֵΪNULL�� 
	p=*(student+num);//pָ��student[num]���е�0�е�ַ����&scores[num][0]�� 
	for(i=0;i<4;i++)
	{
		if(*(p+i)<60.0) 
		{
			result=p;  //����в�����γ̣�ʹresultָ��scores[num][0]�� 
		}
	}
	return result;	
}

//���ĳ��ѧ�������гɼ� 
int input_scores(float *p)
{
	int i;
	for(i=0;i<4;i++)
	{
		printf("%5.1f",*(p+i));
	}
	printf("\n");
} 

