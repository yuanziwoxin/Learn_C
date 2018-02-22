#include <stdio.h>
#include <string.h>

/*
将若干字符串按字母顺序（从小到大）输出 
  ----利用指针数组的方法 
*/
int main()
{
	void sort_string(char *name[],int n);
	void print_string(char *name[],int n); 
	//定义指针数组name，它有5个元素，其初值分别为 "Python","Java","C#",".NET","JavaScript"的首字符的地址。 
	char *name[]={"Python","Java","C#",".NET","JavaScript"};
	int n=5;
	sort_string(name,n);
	print_string(name,n); 
	return 0;
}

//利用选择排序方法，对字符串进行排序 
void sort_string(char *name[],int n)	
{
	int flag,i,j;
	for(i=0;i<n-1;i++)
	{
		flag=i;
		for(j=i+1;j<n;j++)
		{
			//注意：strcmp(str1,str2),所以应分别传入的是两个字符串的首字符的地址。
			//如：strcmp("Hello","World"),其中实质分别传入的是"Hello"、"World"这两个字符串的首字符的地址。
			//其原型为 int strcmp(char *s1,char *s2); 
			if(strcmp(name[flag],name[j])>0)
			flag=j;
		}
		if(flag!=i)
		{
			char *temp;
			temp=name[flag];
			name[flag]=name[i];
			name[i]=temp;	
		}
	}

	
}
//输出字符串 
void print_string(char *name[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%s\n",name[i]);	
	} 
}
