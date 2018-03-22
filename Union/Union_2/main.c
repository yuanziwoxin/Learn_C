#include <stdio.h>
#include <stdlib.h>
struct Message
{
	int i;
	char ch;
	float f;
};
//struct Message a={65,'H',30.0};
 
union Data
{
	int i;
	char ch;
	float f;
} a;

/*
a.i = 0; is not a simple initializer, it is executable code; it cannot occur outside of a function. Use a proper initializer for a.

struct Data a = {65,'H',30.0};
or with named initializer syntax (not available in all compilers, and as yet only in C):

strcut Data a = {.i = 0, .ch = 'H',.f = 30.0};
*/
//a.i=65;
//union Data a = {65,'H',30.0};//注意：不能同时初始化共同体的3个成员，因为它们占用同一段存储单元。 

int main()
{
	//不能用赋值语句对结构体变量中的全部成员整体赋值 
	/*
	struct Message a;
	a={97,'J',35.5};//错误 
	*/
	a.i=128;//注意赋值不能在函数外 ,因为"a.i=65"是一段可执行的代码，必须放在函数中才能执行。 
	printf("%d\n",a.i);
	printf("%c\n",a.ch);
	printf("%f\n",a.f);
	return 0;
}
