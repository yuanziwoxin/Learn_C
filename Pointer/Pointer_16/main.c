#include <stdio.h>
#include <string.h>

/*
�������ַ�������ĸ˳�򣨴�С������� 
  ----����ָ������ķ��� 
*/
int main()
{
	void sort_string(char *name[],int n);
	void print_string(char *name[],int n); 
	//����ָ������name������5��Ԫ�أ����ֵ�ֱ�Ϊ "Python","Java","C#",".NET","JavaScript"�����ַ��ĵ�ַ�� 
	char *name[]={"Python","Java","C#",".NET","JavaScript"};
	int n=5;
	sort_string(name,n);
	print_string(name,n); 
	return 0;
}

//����ѡ�����򷽷������ַ����������� 
void sort_string(char *name[],int n)	
{
	int flag,i,j;
	for(i=0;i<n-1;i++)
	{
		flag=i;
		for(j=i+1;j<n;j++)
		{
			//ע�⣺strcmp(str1,str2),����Ӧ�ֱ�����������ַ��������ַ��ĵ�ַ��
			//�磺strcmp("Hello","World"),����ʵ�ʷֱ������"Hello"��"World"�������ַ��������ַ��ĵ�ַ��
			//��ԭ��Ϊ int strcmp(char *s1,char *s2); 
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
//����ַ��� 
void print_string(char *name[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%s\n",name[i]);	
	} 
}
