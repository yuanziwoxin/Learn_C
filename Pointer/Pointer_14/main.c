#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h> //ʹ����bool���� 

/*
��a��ѧ����ÿ��ѧ����b�ſγ̵ĳɼ������ܲ�������ӣ�
(1) Ҫ�����û�����ѧ������Ժ��������ѧ����ȫ���ɼ�����ָ�뺯����ʵ��;
(2) �����е�ѧ���У��ҳ������в�����γ̵�ѧ������ѧ����;(��һ)
*/
int main()
{
	float scores[][4]={{64,96,85,59},{86,78,84,76},{56,86,75,84}};
	//����������numΪ�û������ѧ����ţ�studentΪָ��һά�����ָ����������ʼָ��scores[0],��ָ���ά����scores�ĵ�0�С�
	float *search(int num,float (*student)[4]);//����ֵΪָ�����ͣ�����&scores[num][0],��Ҫ���ҵĸ��У���ѧ�����гɼ��������У���һ���ɼ����ĵ�ַ�� 
	int input_scores(float *p);
	int num,i,n;
	float *p1,*p2;
	printf("Please enter the number of the student: ");
	scanf("%d",&num);
	//����search�������õ�����ֵ��&scores[num][0],��Ҫ���ҵĸ��У���ѧ�����гɼ��������У���һ���ɼ����ĵ�ַ�� 
	p1=search(num,scores);
	//���Ҫ����ѧ�������гɼ�
	printf("The scores of No.%d is:\n",num);
	input_scores(p1);
	//�����в�����γ̵�ѧ�����������ż������гɼ�
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
	pt=*(student+num);//student��ָ��һά�����ָ�����������student+num��ָ���ά����ĵ�num�еġ� 
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


 
