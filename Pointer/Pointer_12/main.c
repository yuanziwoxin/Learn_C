#include <stdio.h>
#include <stdlib.h>

/*
（1）有两个整数a和b,由用户输入1,2或3.如输入1，程序就给出a和b中较小者；
     如果输入2，程序就输出a和b中较大者；如输入3，就输出a和b两者的和。 
*/ 

/*
（1）本例定义了一个指向函数的指针变量p,根据不同情况，使p指向不同的函数，然后通过该指针变量调用不同的函数。
（2）本例中没有定义指针变量，而是根据不同情况，将不同的函数名作为调用fun函数的实参。
	把函数入口地址传递给函数fun中的形参（该形参是指向函数的指针变量），调用fun函数就分别执行不同的函数。 
*/ 
int main()
{
	//fun函数中的一个形参p为指向函数的指针 
	int fun(int x,int y,int (*p)(int x,int y)); 
	int min(int x,int y);
	int max(int x,int y);
	int add(int x,int y);
	int a=36,b=-10,n;
	printf("Please choose which model you would like to use(1,2,3):  ");
	scanf("%d",&n);	
//	if(n==1) fun(a,b,min);
//	if(n==2) fun(a,b,max);
//	if(n==3) fun(a,b,add);
	switch(n)
	{
		//当输入1时，这时fun函数中的(*p)(x,y)相当于min(x,y),调用min(x,y)就输出a和b中较小者。 
		case 1:
			fun(a,b,min);break;  
		case 2:
			fun(a,b,max);break;
		case 3:
			fun(a,b,add);break;
		default:
			printf("The model you choosed is not exist!");
	}
	return 0;
}

int fun(int x,int y,int (*p)(int x,int y))	//定义fun函数 
{
	int result;
	result=(*p)(x,y);
	printf("%d\n",result);	//输出结果 
	return 0;
}

int min(int x,int y)	//定义min函数 
{
	int temp;
	if(x>y) temp=y;
	else    temp=x;
	printf("min=");
	return temp;		//返回两者中的较小者 
}
int max(int x,int y)	//定义max函数 
{   
	int temp;
	if(x>y) temp=x;
	else    temp=y;
	printf("max=");
	return temp;		//返回两者中的较大者 
}
int add(int x,int y)
{
	int temp;
	temp=x+y;
	printf("sum=");
	return temp;		//返回两者的和 
}
