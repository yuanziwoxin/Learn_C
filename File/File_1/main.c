#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
�Ӽ�������һЩ�ַ�������������͵�������ȥ��ֱ���û�����һ����# ��Ϊֹ 
*/

int main()
{
	char c,filename[20];
	FILE *fp;
	printf("Please enter the file name:\n");
	scanf("%s",filename);
	//ע�⣺���ܰ�if��δ������whileѭ���У������ᵼ��ÿ����һ���ַ�������һ�����ļ��� 
	if((fp=fopen(filename,"w"))==NULL)//��һ����ֻд�����ļ�����ʹfpָ����ļ� 
	{
		printf("cannot open the file!\n");
		exit(0);
	}
	c=getchar();//���ڽ����������ļ���������Ļس��� 
	printf("Please enter some characters:\n");
	while((c=getchar())!='#')
	{
		fputc(c,fp);//������ļ����һ���ַ��� 
		putchar(c);//��������ַ���ʾ����Ļ�ϡ� 
	} 
	fclose(fp);
	putchar(10);//����Ļ���һ�����з� 
	return 0;
}

