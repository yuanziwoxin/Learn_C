#include <stdio.h>
#include <stdlib.h>

/*
��1��ʹ��ָ��ָ�����ݵ�ָ����� 
*/ 
/* 
int main()
{
	char *name[]={"Follow me","Hello","World","Learning Language","Let's go"};
	char **p;
	int i,n=5;
	p=name;//name[0]�ĵ�ַ 
	for(i=0;i<n;i++)
	{
		p=name+i;//name[i]�ĵ�ַ 
		printf("%s\n",*p);//*p����ʾname[i]��ֵ��һ����ַ�� 
	}
	return 0;
}
*/
/*
(2)��һ��ָ�����飬��Ԫ�طֱ���ָ��һ�����������Ԫ�أ���ָ��ָ�����ݵ�ָ�������������������Ԫ�ص�ֵ�� 
*/ 
int main()
{
	char a[]={1,2,5,4,6,}; 
	//ע�⣺ǧ����д��char *name[]={1,2,5,4,6}; ��Ϊָ�������Ԫ��ֻ�ܴ�ŵ�ַ��
	char *name[]={&a[0],&a[1],&a[2],&a[3],&a[4]}; 
	char **p;
	int i,n=5;
	p=name;//name[0]�ĵ�ַ 
	for(i=0;i<n;i++)
	{
		p=name+i;//name[i]�ĵ�ַ 
		printf("%d\n",**p);//*p����ʾname[i]��ֵ��һ����ַ��,��&a[i],**p��ʾa[i]��ֵ�� 
	}
	return 0;
}
