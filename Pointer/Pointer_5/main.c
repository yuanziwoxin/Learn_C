#include <stdio.h>
#include <stdlib.h>

/* 
用指针方法对10个整数按从小到大顺序排序。 
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
//使用选择排序法 
void sort(int x[],int n)
{
	int i,j,flag,temp;
	for(i=0;i<n-1;i++)
	{
		flag=i;
		for(j=i+1;j<n;j++)
		{
			if(x[j]<x[flag])
				flag=j;   //如果后面的元素比x[i]小，则只需要交换这两者的序号即可。 
		}
		if(flag!=i)
		{
			//如果后面剩余的元素比x[i]小，则把后面剩余的最小元素与x[i]的值交换即可。 
			temp=x[i];
			x[i]=x[flag];
			x[flag]=temp;
		}
	}
	return;
} 

/* 
//稍显繁琐 
void sort(int x[],int n)
{
	int i,j,flag,temp;
	for(i=0;i<n-1;i++)
	{
		flag=x[i];
		for(j=i+1;j<n;j++)
		{
			if(x[j]<flag) //这样碰到一个比x[i]小的元素就交换，显得有点繁琐。 
			{
				temp=x[j];
				x[j]=flag;
				flag=temp;
			}
		}
		x[i]=flag;//每次都把剩下的（n-i）个元素进行比较，挑选出其中的最小的元素放在第i个位置（注意：i从0开始） 
	} 
	return;
}
*/
