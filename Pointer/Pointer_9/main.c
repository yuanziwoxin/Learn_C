#include <stdio.h>
#include <stdlib.h>

/*
��������ʹ��ָ�뷽�����ַ������ַ����д�ȡ�� 
*/
int main()
{
	char a[]="I am a student",b[20],*p1,*p2;
	p1=a;
	p2=b;
	for(;*p1!='\0';p1++,p2++)
		*p2=*p1;
	*p2='\0';
	printf("String a is: %s\n",a);//ͨ���������͸�ʽ����"%s"����ַ���(�ַ���������ַ�������)	
	printf("String b is: %s\n",b); 
	return 0;	
} 

/*
���ַ���a����Ϊ�ַ���b,Ȼ������ַ���b. 
����һ�� ʹ���±귨���ַ������ַ����д�ȡ; 
*/
/* 
int main()
{
	char a[]="I am a student.",b[20];
	int i;
	for(i=0;a[i]!='\0';i++)
		b[i]=a[i];
	b[i]='\0';//���һ����Ҫ���˼��Ͻ����ַ��� 
	printf("String a is:\n%s\n",a);
	printf("String b is:\n");
	for(i=0;b[i]!='\0';i++)
		printf("%c",b[i]);
	return 0;
}
*/
