#include <stdio.h>
#include <stdlib.h>

/* 
输入3个整数a,b,c,要求按照从小到大的顺序输出，利用函数的形式 
 */

int main() {
	void exchange(int *p1,int *p2,int *p3);
	int *pointer_1,*pointer_2,*pointer_3,a,b,c;
	printf("Please enter three numbers:");
	scanf("%d %d %d",&a,&b,&c);
	pointer_1=&a;
	pointer_2=&b;
	pointer_3=&c;
	printf("%d\n",pointer_1); 
	exchange(pointer_1,pointer_2,pointer_3);  //注意：exchange函数中的参数都是指针变量 
	printf("%d %d %d\n",*pointer_1,*pointer_2,*pointer_3); 
	printf("%d\n",pointer_1); //可以发现实参指针变量在执行完调用函数后依然没有改变 
	return 0;
}

void exchange(int *p1,int *p2,int *p3)
{
	void swap(int *p_1,int *p_2);
	if(*p1>*p2)
		swap(p1,p2);  //swap函数中的参数是指针变量，但其中交换的是指针变量指向的变量的值 
	if(*p2>*p3)
		swap(p2,p3);
	if(*p1>*p3)
		swap(p1,p3);
}

void swap(int *p_1,int *p_2)
{
	int temp;
	temp=*p_1;
	*p_1=*p_2;
	*p_2=temp;
}

