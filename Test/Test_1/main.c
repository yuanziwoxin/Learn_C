#include <stdio.h>
#include <stdlib.h>

#define N 2
#define M N+1
#define NUM 2*M+1
/*
�궨�壺�ú�������ʾһ���ַ������ں�չ��ʱ���Ը��ַ���ȡ�������� 
ע�⣺
��1�������ں�չ��ʱ���궨��ʱ����������ַ���ֱ���滻�� 
��2���ַ����п��Ժ��κ��ַ��������ǳ�����Ҳ�����Ǳ��ʽ��
��3���궨�����д�ں���֮�⣬��������Ϊ�궨��������Դ�����������Ҫ��ֹ���������ʹ��#undef��� 
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
