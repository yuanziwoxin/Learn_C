#include <stdio.h>
#include <stdlib.h>

/* 
��ָ�뷽����10����������С����˳������ 
 */

int main() {
	void sort(int x[],int n);
	int a[10];
	int i,*p,length;
	length=sizeof(a)/sizeof(int);
	p=a;
	printf("Please enter 10 numbers:\n");
	for(i=0;i<length;i++)
	{
		scanf("%d",p++);
	} 
	sort(a,length);
	printf("The right order is:\n");
	for(p=a;p<a+length;p++)
	{
		printf("%d\t",*p);
	}
	printf("\n");
	return 0;
}
//ʹ��ѡ������ 
void sort(int x[],int n)
{
	int i,j,flag,temp;
	for(i=0;i<n-1;i++)
	{
		flag=i;
		for(j=i+1;j<n;j++)
		{
			if(x[j]<x[flag])
				flag=j;   //��������Ԫ�ر�x[i]С����ֻ��Ҫ���������ߵ���ż��ɡ� 
		}
		if(flag!=i)
		{
			//�������ʣ���Ԫ�ر�x[i]С����Ѻ���ʣ�����СԪ����x[i]��ֵ�������ɡ� 
			temp=x[i];
			x[i]=x[flag];
			x[flag]=temp;
		}
	}
	return;
} 

/* 
//���Է��� 
void sort(int x[],int n)
{
	int i,j,flag,temp;
	for(i=0;i<n-1;i++)
	{
		flag=x[i];
		for(j=i+1;j<n;j++)
		{
			if(x[j]<flag) //��������һ����x[i]С��Ԫ�ؾͽ������Ե��е㷱���� 
			{
				temp=x[j];
				x[j]=flag;
				flag=temp;
			}
		}
		x[i]=flag;//ÿ�ζ���ʣ�µģ�n-i����Ԫ�ؽ��бȽϣ���ѡ�����е���С��Ԫ�ط��ڵ�i��λ�ã�ע�⣺i��0��ʼ�� 
	} 
	return;
}
*/
