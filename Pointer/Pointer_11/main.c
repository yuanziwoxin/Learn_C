#include <stdio.h>
#include <stdlib.h>

/*
方法二：通过函数指针变量调用函数 
*/
int main()
{
	int max(int x,int y);
	int a,b,c;
	/*
	  (1) 定义p是一个指向函数的指针变量，它可指向函数的类型为整型且有两个整型参数的函数。
      (2) p的括号不能省去，这表示p先与*号结合，是指针变量，然后再与后面的()结合，()表示函数，
	     即该指针变量不是指向一般的变量,而是指向函数,最前面的int表示函数值（函数返回值为整型）。
   */
	int (*p)(int x,int y); //p的类型用int(*)(int,int)表示。 
	printf("Please enter a and b:");
	scanf("%d,%d",&a,&b);
	p=max;//使p指向max函数。 
	c=(*p)(a,b);//通过指针变量调用max函数。 
	printf("a=%d\nb=%d\nmax=%d\n",a,b,c);
	return 0;
}

/*
方法一：通过函数名调用函数 
*/
/* 
int main()
{
	int max(int x,int y);
	int a,b,c;
	printf("Please enter a and b:");
	scanf("%d,%d",&a,&b);
	c=max(a,b);
	printf("a=%d\nb=%d\nmax=%d\n",a,b,c);
	return 0;
}
*/

int max(int x,int y)
{
	int max;
	if(x>y)
		max=x;
	else 
		max=y;
	return max;
}
