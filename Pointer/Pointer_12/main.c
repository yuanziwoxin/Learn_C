#include <stdio.h>
#include <stdlib.h>

/*
��1������������a��b,���û�����1,2��3.������1������͸���a��b�н�С�ߣ�
     �������2����������a��b�нϴ��ߣ�������3�������a��b���ߵĺ͡� 
*/ 

/*
��1������������һ��ָ������ָ�����p,���ݲ�ͬ�����ʹpָ��ͬ�ĺ�����Ȼ��ͨ����ָ��������ò�ͬ�ĺ�����
��2��������û�ж���ָ����������Ǹ��ݲ�ͬ���������ͬ�ĺ�������Ϊ����fun������ʵ�Ρ�
	�Ѻ�����ڵ�ַ���ݸ�����fun�е��βΣ����β���ָ������ָ�������������fun�����ͷֱ�ִ�в�ͬ�ĺ����� 
*/ 
int main()
{
	//fun�����е�һ���β�pΪָ������ָ�� 
	int fun(int x,int y,int (*p)(int x,int y)); 
	int min(int x,int y);
	int max(int x,int y);
	int add(int x,int y);
	int a=36,b=-10,n;
	printf("Please choose which model you would like to use(1,2,3):  ");
	scanf("%d",&n);	
//	if(n==1) fun(a,b,min);
//	if(n==2) fun(a,b,max);
//	if(n==3) fun(a,b,add);
	switch(n)
	{
		//������1ʱ����ʱfun�����е�(*p)(x,y)�൱��min(x,y),����min(x,y)�����a��b�н�С�ߡ� 
		case 1:
			fun(a,b,min);break;  
		case 2:
			fun(a,b,max);break;
		case 3:
			fun(a,b,add);break;
		default:
			printf("The model you choosed is not exist!");
	}
	return 0;
}

int fun(int x,int y,int (*p)(int x,int y))	//����fun���� 
{
	int result;
	result=(*p)(x,y);
	printf("%d\n",result);	//������ 
	return 0;
}

int min(int x,int y)	//����min���� 
{
	int temp;
	if(x>y) temp=y;
	else    temp=x;
	printf("min=");
	return temp;		//���������еĽ�С�� 
}
int max(int x,int y)	//����max���� 
{   
	int temp;
	if(x>y) temp=x;
	else    temp=y;
	printf("max=");
	return temp;		//���������еĽϴ��� 
}
int add(int x,int y)
{
	int temp;
	temp=x+y;
	printf("sum=");
	return temp;		//�������ߵĺ� 
}
