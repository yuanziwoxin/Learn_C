#include <stdio.h>
#include <stdlib.h>

/*
��������ͨ��ִ�е��ú������ı�ʵ��ָ�������ָ�������ֵ���Ӷ�ʵ��a��b��ֵ���� 
*/ 
int main(){
	void swap(int *p1,int *p2);
	int *pointer_1,*pointer_2,a,b;
	printf("Please enter two numbers:");
	scanf("%d,%d",&a,&b);
	pointer_1=&a;
	pointer_2=&b;
	if(a>b)
	{
		swap(pointer_1,pointer_2);
	}
	printf("%d %d",*pointer_1,*pointer_2);//ͨ��ִ�е��ú�������ʵ�ָı�ʵ��ָ�������ָ�������ֵ�� 
//	printf("%d %d",a,b);  //�������Ч��һ������Ϊ*pointer_1��a��һ����˼ 
	return 0;
} 
void swap(int *p1,int *p2)
{
	int temp;
	temp=*p1;
	*p1=*p2;
	*p2=temp;
}

/*
ע�⣺������ͼͨ���ı�ָ���βε�ֵ���ı�ָ��ʵ�ε�ֵ 
��Ϊ C������ʵ�α������βα���֮������ݴ����ǵ����"ֵ����"��ʽ����ָ�������Ϊ����������ȻҪ��ѭ��һ���� 
������ͨ��ִ�е��ú������ı�ʵ��ָ�������ֵ�����ǿ��Ըı�ʵ��ָ�������ָ�������ֵ 
*/ 
//���ﲢ����ʵ�ֽ���a��b��ֵ 
/*
int main(){
	void swap(int *p1,int *p2);
	int *pointer_1,*pointer_2,a,b;
	printf("Please enter two numbers:");
	scanf("%d,%d",&a,&b);
	pointer_1=&a;
	pointer_2=&b;
	if(a>b)
	{
		swap(pointer_1,pointer_2);
	}
	printf("%d %d",*pointer_1,*pointer_2);
	return 0;
} 
void swap(int *p1,int *p2)
{
	int *temp;
	temp=p1;
	p1=p2;
	p2=temp;
}
*/

/*
�����������ý���ָ�����ָ��ı���ֵ��������a��b��ֵ�� 
*/
/*
int main(){
	int *p1,*p2,a,b;
	int temp;
	printf("Please enter two numbers:");
	scanf("%d,%d",&a,&b);
	p1=&a;
	p2=&b;
	if(a>b)
	{
		// *p1��*p2ʵ�ʾ��Ǳ�ʾָ�����p1�� p2ָ��ı�������a �� b�� 
		temp=*p1;
		*p1=*p2;
		*p2=temp;	
	} 
	printf("%d %d",a,b);
	return 0;
}
*/

/*
����a��b�������������ȴ��С��˳�����a��b; 
����һ�����øı�ָ�������ֵ��ʵ�֣����ı�ָ���ָ�� 
*/ 
/* 
int main() {
	int *p1,*p2,a,b;
	int *temp;
	printf("Please enter two numbers:");
	scanf("%d %d",&a,&b);//ע��������ʱ���������ݵĸ�ʽҪ��scanf�еĸ�ʽ��ͬ�� 
	p1=&a;
	p2=&b;
	if(a<b)
	{
		temp=p1;
		p1=p2;
		p2=temp;
	}
	printf("Max=%d,Min=%d",*p1,*p2);
	return 0;
}
*/
