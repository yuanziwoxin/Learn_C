#include <stdio.h>
#include <stdlib.h>

/*
方法二：使用指针方法对字符串中字符进行存取； 
*/
int main()
{
	char a[]="I am a student",b[20],*p1,*p2;
	p1=a;
	p2=b;
	for(;*p1!='\0';p1++,p2++)
		*p2=*p1;
	*p2='\0';
	printf("String a is: %s\n",a);//通过数组名和格式声明"%s"输出字符串(字符串存放在字符数组中)	
	printf("String b is: %s\n",b); 
	return 0;	
} 

/*
将字符串a复制为字符串b,然后输出字符串b. 
方法一： 使用下标法对字符串中字符进行存取; 
*/
/* 
int main()
{
	char a[]="I am a student.",b[20];
	int i;
	for(i=0;a[i]!='\0';i++)
		b[i]=a[i];
	b[i]='\0';//最后一定不要忘了加上结束字符。 
	printf("String a is:\n%s\n",a);
	printf("String b is:\n");
	for(i=0;b[i]!='\0';i++)
		printf("%c",b[i]);
	return 0;
}
*/
