#include <stdio.h>
#include <stdlib.h>

/*
方法三：通过执行调用函数来改变实参指针变量所指向变量的值，从而实现a和b的值交换 
*/ 
int main(){
	void swap(int *p1,int *p2);
	int *pointer_1,*pointer_2,a,b;
	printf("Please enter two numbers:");
	scanf("%d,%d",&a,&b);
	pointer_1=&a;
	pointer_2=&b;
	if(a>b)
	{
		swap(pointer_1,pointer_2);
	}
	printf("%d %d",*pointer_1,*pointer_2);//通过执行调用函数可以实现改变实参指针变量所指向变量的值。 
//	printf("%d %d",a,b);  //两种输出效果一样，因为*pointer_1和a是一个意思 
	return 0;
} 
void swap(int *p1,int *p2)
{
	int temp;
	temp=*p1;
	*p1=*p2;
	*p2=temp;
}

/*
注意：不能企图通过改变指针形参的值而改变指针实参的值 
因为 C语言中实参变量和形参变量之间的数据传递是单向的"值传递"方式。用指针变量作为函数参数依然要遵循这一规则。 
不可能通过执行调用函数来改变实参指针变量的值，但是可以改变实参指针变量所指向变量的值 
*/ 
//这里并不能实现交换a和b的值 
/*
int main(){
	void swap(int *p1,int *p2);
	int *pointer_1,*pointer_2,a,b;
	printf("Please enter two numbers:");
	scanf("%d,%d",&a,&b);
	pointer_1=&a;
	pointer_2=&b;
	if(a>b)
	{
		swap(pointer_1,pointer_2);
	}
	printf("%d %d",*pointer_1,*pointer_2);
	return 0;
} 
void swap(int *p1,int *p2)
{
	int *temp;
	temp=p1;
	p1=p2;
	p2=temp;
}
*/

/*
方法二：利用交换指针变量指向的变量值（即交换a和b的值） 
*/
/*
int main(){
	int *p1,*p2,a,b;
	int temp;
	printf("Please enter two numbers:");
	scanf("%d,%d",&a,&b);
	p1=&a;
	p2=&b;
	if(a>b)
	{
		// *p1和*p2实际就是表示指针变量p1和 p2指向的变量（即a 和 b） 
		temp=*p1;
		*p1=*p2;
		*p2=temp;	
	} 
	printf("%d %d",a,b);
	return 0;
}
*/

/*
输入a和b两个整数，按先大后小的顺序输出a和b; 
方法一：利用改变指针变量的值来实现（即改变指针的指向） 
*/ 
/* 
int main() {
	int *p1,*p2,a,b;
	int *temp;
	printf("Please enter two numbers:");
	scanf("%d %d",&a,&b);//注意在运行时，输入数据的格式要和scanf中的格式相同； 
	p1=&a;
	p2=&b;
	if(a<b)
	{
		temp=p1;
		p1=p2;
		p2=temp;
	}
	printf("Max=%d,Min=%d",*p1,*p2);
	return 0;
}
*/
