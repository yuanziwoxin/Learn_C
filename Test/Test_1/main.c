#include <stdio.h>
#include <stdlib.h>

#define N 2
#define M N+1
#define NUM 2*M+1
/*
宏定义：用宏名来表示一个字符串，在宏展开时又以该字符串取代宏名。 
注意：
（1）宏名在宏展开时被宏定义时宏名后面的字符串直接替换。 
（2）字符串中可以含任何字符，可以是常数，也可以是表达式。
（3）宏定义必须写在函数之外，其作用域为宏定义命令起到源程序结束。如要终止其作用域可使用#undef命令。 
*/
int main()
{
//	int i;
//	printf("N=%d\n",N);
//	printf("M=%d\n",M);
//	printf("NUM=%d\n",NUM);
//	for(i=1;i<=NUM;i++)
//		printf("%d\n",i);
	char s[]="Yes\n/No",*ps=s;
	puts(ps+4);
	*(ps+4)=0;
	puts(s); 
	printf("Hello");
	return 0;
}
