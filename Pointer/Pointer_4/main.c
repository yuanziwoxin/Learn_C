#include <stdio.h>
#include <stdlib.h>
 
/*
法二：用指针变量作形参; 
*/ 
int main()
{
	void inv(int *arr,int n);
	int a[10]={1,5,6,9,7,8,3,2,0,4};
	int i,length;
	length=sizeof(a)/sizeof(int);
	printf("The original order is:\n");
	for(i=0;i<length;i++)
	{
		printf("%d\t",a[i]);
	}
	inv(a,length);//两头交换顺序 
	printf("\n");
	printf("The new order is:\n");
	for(i=0;i<length;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
//改进之后
void inv(int *arr,int n)
{
	int *i,*j,*p,temp;
	int flag=n/2;
	i=arr;
	j=arr+n-1;
	p=arr+flag;
	for(;i<p;i++,j--)
	{
		temp=*i;
		*i=*j;
		*j=temp;
	}
	return;
 } 
//有些繁琐 
/* 
void inv(int *arr,int n)
{
	int i=0,j,temp;
	int flag=n/2;
	int *p1,*p2;
	p1=arr;
	p2=arr+n-1;
	while(i<flag)
	{
		temp=*p1;
		*p1=*p2;
		*p2=temp;
		p1++;
		p2--;
		i++;	
	}
	return; 
}
*/

/* 
将数组a中n个整数按相反顺序存放。 (两头的元素相互交换)
法一：用数组名作函数参数; 
 */
 
/*
int main() {
	void inv(int *arr,int n);
	int a[10]={1,5,6,9,7,8,3,2,0,4};
	int i,length;
	length=sizeof(a)/sizeof(int);
	printf("The original order is:\n");
	for(i=0;i<length;i++)
	{
		printf("%d\t",a[i]);
	}
	inv(a,length);//两头交换顺序 
	printf("\n");
	printf("The new order is:\n");
	for(i=0;i<length;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}

void inv(int arr[],int n) //写成int *arr也可以 
{
	int i=0,j,temp;
	int flag=n/2;
	while(i<flag)
	{
		j=n-i-1;
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		i++;	
	}
	return; 
}
*/
