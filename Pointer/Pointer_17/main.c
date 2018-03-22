#include <stdio.h>
#include <stdlib.h>

/*
（1）使用指向指针数据的指针变量 
*/ 
/* 
int main()
{
	char *name[]={"Follow me","Hello","World","Learning Language","Let's go"};
	char **p;
	int i,n=5;
	p=name;//name[0]的地址 
	for(i=0;i<n;i++)
	{
		p=name+i;//name[i]的地址 
		printf("%s\n",*p);//*p即表示name[i]的值（一个地址） 
	}
	return 0;
}
*/
/*
(2)有一个指针数组，其元素分别是指向一个整型数组的元素，用指向指针数据的指针变量，输出整型数组各元素的值。 
*/ 
int main()
{
	char a[]={1,2,5,4,6,}; 
	//注意：千万不能写成char *name[]={1,2,5,4,6}; 因为指针数组的元素只能存放地址。
	char *name[]={&a[0],&a[1],&a[2],&a[3],&a[4]}; 
	char **p;
	int i,n=5;
	p=name;//name[0]的地址 
	for(i=0;i<n;i++)
	{
		p=name+i;//name[i]的地址 
		printf("%d\n",**p);//*p即表示name[i]的值（一个地址）,即&a[i],**p表示a[i]的值。 
	}
	return 0;
}
