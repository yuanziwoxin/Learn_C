#include <stdio.h>
#include <stdlib.h>

/*
�����ģ� �ַ���������ʵ�Σ��ַ���ָ��������β� 
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
����copy_string�����п����ж��ֲ�ͬ��ʽ��ʵ����ͬ��Ч���� 
//��1��
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
 //ע��"\0"��ASCII��Ϊ0; 
 while((*b++=*a++)!=0);//ǧ��Ҫ���˼�";" 
 //Ҳ����д��
 while(*b++=*a++);
 //������0Ҳ���Ǳ�ʾΪ��, �����ʾ�Ȱ�*a��ֵ��ֵ��*b,���ж�*b�Ƿ�Ϊ0��'\0'��ASCIIֵΪ0����Ϊ0������whileѭ�������������a�����е�δ���Ƶ��ַ����Ƶ�b������ȥ�� 

// (5)
for(;*b++=*a++;); 
 //��
for(;(*b++=*a++)!=0;); 
*/

/*
���������ַ���ָ�������ʵ�Σ��ַ����������β� 
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
	//�������ȡ"%s"��ʽ���������"%c"��ʽ����ַ�������ǿ������������ַ��ġ�(b�����е��ַ�������a�����е��ַ�������) 
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
���������βκ�ʵ�ζ����ַ�ָ����� 
*/
/* 
int main()
{
	void copy_string(char *a,char *b);//�����ַ������ƺ����� 
	char a[]="I am a teacher.";
	char b[]="You are a student.";
	char *p1,*p2;
	p1=a;
	p2=b;
	printf("String a is: %s\n",a);
	printf("String b is: %s\n",b);
	copy_string(p1,p2);//�ַ�ָ�����Ϊʵ�� 
	printf("copy string a to string b:\n");
	printf("String a is: %s\n",a); 
	printf("String b is: %s\n",b); 
	return 0; 
} 

void copy_string(char *a,char *b)//�ַ�ָ�����Ϊ�β� 
{
	for(;*a!='\0';a++,b++)
		*b=*a;
	*b='\0';
}
*/

/*
�ú�������ʵ���ַ����ĸ���
����һ���βκ�ʵ�ζ����ַ�������; 
*/ 
/*
int main()
{
	void copy_string(char a[],char b[]);//�����ַ������ƺ����� 
	char a[]="I am a teacher.";
	char b[]="You are a student.";
	char *p1,*p2;
	p1=a;
	p2=b;
	printf("String a is: %s\n",a);
	printf("String b is: %s\n",b);
	copy_string(a,b);//�ַ�������Ϊʵ�� 
	printf("copy string a to string b:\n");
	printf("String a is: %s\n",a); 
	printf("String b is: %s\n",b); 
	return 0; 
} 

void copy_string(char a[],char b[])//�ַ�������Ϊ�β� 
{
	int i;
	for(i=0;a[i]!='\0';i++)
		b[i]=a[i];
	b[i]='\0';
}
*/
