#include <stdio.h>
#include <stdlib.h>

/*
������������ָ�����ָ������Ԫ�صķ�ʽ��������Ԫ�� ����������ÿ�ζ����¼����ַ��  
*/
/* 
int main()
{
	int a[10];
	int *p;
	//p=a;   //��p=&a[0]�ȼ�
	for(p=a;p<(a+10);p++)
	{
		scanf("%d",p);
	} 
	
	for(p=a;p<(a+10);p++)
	{
		printf("%d\t",*p);
	}
	return 0;
 } 
*/
/*
�������������޸� 
*/
int main()
{
	int a[10];
	int i,length,*p;
	length=sizeof(a)/sizeof(int);
	p=a;
	for(i=0;i<length;i++)
	{
		scanf("%d",p++);
	}
	p=a; //ע�⣺����һ��Ҫ���½� &a[0]�ĳ�ʼֵ����p,��Ȼ��ʱ��p����һ��forѭ���ĳ�ʼֵ��Ϊ &a[10]�ˡ� 
	for(i=0;i<length;i++)  //ע���޸ĵĲ��� 
	{
		printf("%d\t",*p++); //ͨ����������Ԫ����ż���Ԫ�ص�ַ�����ҵ���Ԫ�ء� 
	}
	return 0;
 } 


/*
��������ͨ��������������������Ԫ�ص�ַ���Ӷ��ҳ�Ԫ�ص�ֵ�� 
*/
/* 
int main()
{
	int a[10];
	int i,length,*p;
	length=sizeof(a)/sizeof(int);
	p=a;
	for(i=0;i<length;i++)
	{
		scanf("%d",p++);
	}
	p=a; //ע�⣺����һ��Ҫ���½� &a[0]�ĳ�ʼֵ����p,��Ȼ��ʱ��p����һ��forѭ���ĳ�ʼֵ��Ϊ &a[10]�ˡ� 
	for(i=0;i<length;i++,p++)
	{
		printf("%d\t",*p); //ͨ����������Ԫ����ż���Ԫ�ص�ַ�����ҵ���Ԫ�ء� 
	}
	return 0;
 } 
 */
/*
int main()
{
	int a[10];
	int i,length;
	length=sizeof(a)/sizeof(int);
	for(i=0;i<length;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<length;i++)
	{
		printf("%d\t",*(a+i)); //ͨ����������Ԫ����ż���Ԫ�ص�ַ�����ҵ���Ԫ�ء� 
	}
	return 0;
 } 
*/ 

/* 
���һ��ӵ��10��Ԫ�ص����������ȫ��Ԫ�ء� 
����һ�����������±�ķ�ʽ��������Ԫ�� 
 */
 
/* 
int main() {
	int a[10];
	int i,j,length;
	length=sizeof(a)/sizeof(int); //�������ĳ��� 
	for(i=0;i<length;i++)
	{
		scanf("%d",&a[i]);
	} 
	for(j=0;j<length;j++)
	{
		printf("%d\n",a[j]);
	}
	return 0;
}
*/
