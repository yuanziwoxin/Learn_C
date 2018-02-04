#include <stdio.h>
#include <stdlib.h>

/*
方法三：利用指针变量指向数组元素的方式访问数组元素 （这样不必每次都重新计算地址）  
*/
/* 
int main()
{
	int a[10];
	int *p;
	//p=a;   //与p=&a[0]等价
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
方法二的稍作修改 
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
	p=a; //注意：这里一定要重新将 &a[0]的初始值赋给p,不然此时的p在下一个for循环的初始值就为 &a[10]了。 
	for(i=0;i<length;i++)  //注意修改的部分 
	{
		printf("%d\t",*p++); //通过数组名和元素序号计算元素地址，再找到该元素。 
	}
	return 0;
 } 


/*
方法二：通过计算数组名计算数组元素地址，从而找出元素的值。 
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
	p=a; //注意：这里一定要重新将 &a[0]的初始值赋给p,不然此时的p在下一个for循环的初始值就为 &a[10]了。 
	for(i=0;i<length;i++,p++)
	{
		printf("%d\t",*p); //通过数组名和元素序号计算元素地址，再找到该元素。 
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
		printf("%d\t",*(a+i)); //通过数组名和元素序号计算元素地址，再找到该元素。 
	}
	return 0;
 } 
*/ 

/* 
输出一个拥有10个元素的整形数组的全部元素。 
方法一：利用数组下标的方式访问数组元素 
 */
 
/* 
int main() {
	int a[10];
	int i,j,length;
	length=sizeof(a)/sizeof(int); //求出数组的长度 
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
