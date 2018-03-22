#include <stdio.h>
#include <stdlib.h>

/*
void指针类型需注意的几个点 
*/ 
int main()
{
	int a=136;
	int *p1=&a;
	char *p2;
	void *p3;//p3为无类型指针变量（基类型为void型）; 
	p3=(void *)p1;//将p1的值转换为void *类型，然后赋值给p3; 
	p2=(char *)p3;//将p3的值转换为char *类型，然后赋值给p2; 
	
	printf("%d",*p1);//合法，输出a的值。
	
	p3=&a; //相当于"p3=(void *)&a;" ,编译系统会自动进行转换，不必用户自己进行强制转换。 
	//错误，p3是无指向的，不能指向a. 赋值后p3得到a的纯地址，但并不指向a,不能通过*p3输出a的值。
	//printf("%d",*p3); 
	return 0;
}
