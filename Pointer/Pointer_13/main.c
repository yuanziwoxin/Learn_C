#include <stdio.h>
#include <stdlib.h>

/*
��a��ѧ����ÿ��ѧ����b�ſγ̵ĳɼ���Ҫ�����û�����ѧ������Ժ��������ѧ����ȫ���ɼ�����ָ�뺯����ʵ�֡� 
*/
int main()
{
	int *p(int num,int (*student)[4]);//studentΪָ�����4��Ԫ�ص�һά�����ָ������� 
	int scores[][4]={{68,69,85,84},{96,58,76,86},{84,69,85,76},{85,86,78,96},{89,89,98,86}};
	int *c,i,n;
	printf("Please enter a number: ");
	scanf("%d",&n);
	c=p(n,scores);
	for(i=0;i<4;i++)
	{
		printf("%d\t",*(c+i)); 
	}
	return 0;
}

int *p(int num,int (*student)[4])
{
	int *pt;
	//student+num��ʾscores�����num�е���Ԫ�ص�ַ����&scores[num],
	//��*(student+num)��num��0�еĵ�ַ����&scores[num][0]��
	pt=*(student+num); 
	return pt;
}
