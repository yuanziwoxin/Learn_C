#include <stdio.h>
#include <stdlib.h>

/* 
����3������a,b,c,Ҫ���մ�С�����˳����������ú�������ʽ 
 */

int main() {
	void exchange(int *p1,int *p2,int *p3);
	int *pointer_1,*pointer_2,*pointer_3,a,b,c;
	printf("Please enter three numbers:");
	scanf("%d %d %d",&a,&b,&c);
	pointer_1=&a;
	pointer_2=&b;
	pointer_3=&c;
	printf("%d\n",pointer_1); 
	exchange(pointer_1,pointer_2,pointer_3);  //ע�⣺exchange�����еĲ�������ָ����� 
	printf("%d %d %d\n",*pointer_1,*pointer_2,*pointer_3); 
	printf("%d\n",pointer_1); //���Է���ʵ��ָ�������ִ������ú�������Ȼû�иı� 
	return 0;
}

void exchange(int *p1,int *p2,int *p3)
{
	void swap(int *p_1,int *p_2);
	if(*p1>*p2)
		swap(p1,p2);  //swap�����еĲ�����ָ������������н�������ָ�����ָ��ı�����ֵ 
	if(*p2>*p3)
		swap(p2,p3);
	if(*p1>*p3)
		swap(p1,p3);
}

void swap(int *p_1,int *p_2)
{
	int temp;
	temp=*p_1;
	*p_1=*p_2;
	*p_2=temp;
}

