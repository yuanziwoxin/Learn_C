#include <stdio.h>
#include <stdlib.h>

/*
方法四： 字符数组名作实参，字符型指针变量作形参 
*/
int main()
{
	void copy_string(char *a,char *b);
	char a[]="I am a teacher.";
	char b[]="You are a student.";
	int i;
	printf("String a is: %s\n",a);
	printf("String b is: %s\n",b);
	printf("copy string a to string b:\n");
	copy_string(a,b);
	printf("String a is: %s\n",a);
	printf("String b is: %s\n",b);
	return 0;
} 

void copy_string(char *a,char *b)
{
	for(;*b++=*a++;); 
} 
/*
上述copy_string函数中可以有多种不同方式而实现相同的效果。 
//（1）
while(*a!='\0')
{
	*b++=*a++;
}
	*b='\0';
	
// (2)
while((*b=*a)!='\0')
{
	b++;
	a++;
} 

// (3)
while((*b++=*a++)!='\0');

// (4)
 //注意"\0"的ASCII码为0; 
 while((*b++=*a++)!=0);//千万不要忘了加";" 
 //也可以写成
 while(*b++=*a++);
 //不等于0也就是表示为真, 这里表示先把*a的值赋值给*b,再判断*b是否为0（'\0'的ASCII值为0），为0则跳出while循环，否则继续将a数组中的未复制的字符复制到b数组中去。 

// (5)
for(;*b++=*a++;); 
 //或
for(;(*b++=*a++)!=0;); 
*/

/*
方法三：字符型指针变量作实参，字符数组名作形参 
*/
/* 
int main()
{
	void copy_string(char a[],char b[]);
	char a[]="I am a teacher.";
	char b[]="You are a student.";
	char *p1,*p2;
	int i;
	p1=a;
	p2=b;
	printf("String a is: %s\n",a);
	printf("String b is: %s\n",b);
	printf("copy string a to string b:\n");
	copy_string(p1,p2);
	printf("String a is: %s\n",a);
	printf("String b is: %s\n",b);
	//如果不采取"%s"格式输出，二用"%c"格式逐个字符输出，是可以输出后面的字符的。(b数组中的字符个数比a数组中的字符个数多) 
	for(i=0;i<sizeof(b)/sizeof(char);i++) 
	{
		printf("%c",b[i]);
	}
	return 0;
} 

void copy_string(char a[],char b[])
{
	int i=0;
	while(a[i]!='\0')
	{
		b[i]=a[i];
		i++;
	}
	b[i]='\0';
		
}
*/

/*
方法二：形参和实参都是字符指针变量 
*/
/* 
int main()
{
	void copy_string(char *a,char *b);//声明字符串复制函数。 
	char a[]="I am a teacher.";
	char b[]="You are a student.";
	char *p1,*p2;
	p1=a;
	p2=b;
	printf("String a is: %s\n",a);
	printf("String b is: %s\n",b);
	copy_string(p1,p2);//字符指针变量为实参 
	printf("copy string a to string b:\n");
	printf("String a is: %s\n",a); 
	printf("String b is: %s\n",b); 
	return 0; 
} 

void copy_string(char *a,char *b)//字符指针变量为形参 
{
	for(;*a!='\0';a++,b++)
		*b=*a;
	*b='\0';
}
*/

/*
用函数调用实现字符串的复制
方法一：形参和实参都是字符数组名; 
*/ 
/*
int main()
{
	void copy_string(char a[],char b[]);//声明字符串复制函数。 
	char a[]="I am a teacher.";
	char b[]="You are a student.";
	char *p1,*p2;
	p1=a;
	p2=b;
	printf("String a is: %s\n",a);
	printf("String b is: %s\n",b);
	copy_string(a,b);//字符数组名为实参 
	printf("copy string a to string b:\n");
	printf("String a is: %s\n",a); 
	printf("String b is: %s\n",b); 
	return 0; 
} 

void copy_string(char a[],char b[])//字符数组名为形参 
{
	int i;
	for(i=0;a[i]!='\0';i++)
		b[i]=a[i];
	b[i]='\0';
}
*/
