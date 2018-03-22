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
//union Data a = {65,'H',30.0};//ע�⣺����ͬʱ��ʼ����ͬ���3����Ա����Ϊ����ռ��ͬһ�δ洢��Ԫ�� 

int main()
{
	//�����ø�ֵ���Խṹ������е�ȫ����Ա���帳ֵ 
	/*
	struct Message a;
	a={97,'J',35.5};//���� 
	*/
	a.i=128;//ע�⸳ֵ�����ں����� ,��Ϊ"a.i=65"��һ�ο�ִ�еĴ��룬������ں����в���ִ�С� 
	printf("%d\n",a.i);
	printf("%c\n",a.ch);
	printf("%f\n",a.f);
	return 0;
}
