#include <stdio.h>
#include <stdlib.h>

/*
��������ͨ������ָ��������ú��� 
*/
int main()
{
	int max(int x,int y);
	int a,b,c;
	/*
	  (1) ����p��һ��ָ������ָ�����������ָ����������Ϊ���������������Ͳ����ĺ�����
      (2) p�����Ų���ʡȥ�����ʾp����*�Ž�ϣ���ָ�������Ȼ����������()��ϣ�()��ʾ������
	     ����ָ���������ָ��һ��ı���,����ָ����,��ǰ���int��ʾ����ֵ����������ֵΪ���ͣ���
   */
	int (*p)(int x,int y); //p��������int(*)(int,int)��ʾ�� 
	printf("Please enter a and b:");
	scanf("%d,%d",&a,&b);
	p=max;//ʹpָ��max������ 
	c=(*p)(a,b);//ͨ��ָ���������max������ 
	printf("a=%d\nb=%d\nmax=%d\n",a,b,c);
	return 0;
}

/*
����һ��ͨ�����������ú��� 
*/
/* 
int main()
{
	int max(int x,int y);
	int a,b,c;
	printf("Please enter a and b:");
	scanf("%d,%d",&a,&b);
	c=max(a,b);
	printf("a=%d\nb=%d\nmax=%d\n",a,b,c);
	return 0;
}
*/

int max(int x,int y)
{
	int max;
	if(x>y)
		max=x;
	else 
		max=y;
	return max;
}
