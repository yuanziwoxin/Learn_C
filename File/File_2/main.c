#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
��һ�������ļ��е���Ϣ���Ƶ���һ�������ļ��� 
*/
int main()
{
	FILE *fp,*fp1;
	char str,infile[10],outfile[10];
	printf("Please enter the file name you want to read: ");
	scanf("%s",infile);//����һ�������ļ������� 
	printf("Please enter the file name you want to write: ");
	scanf("%s",outfile);//����һ������ļ������� 
    //����һ�����ı��ļ���ʽ���� 
	if((fp=fopen(infile,"r"))==NULL)
	{
		printf("cannot open the file1!\n");
		exit(0);
	}
	if((fp1=fopen(outfile,"w"))==NULL)
	{
		printf("cannot open the file2!\n");
		exit(0);
	}
	//�����������������ļ�������rb���͡�wb���� 
	/* 
	if((fp=fopen(infile,"rb"))==NULL)
	{
		printf("cannot open the file1!\n");
		exit(0);
	}
	if((fp1=fopen(outfile,"wb"))==NULL)
	{
		printf("cannot open the file2!\n");
		exit(0);
	}
	*/ 
	while(!feof(fp))
	{
		/*
		Ҫ�ж�һ�¶��ַ��Ƿ�ʧ�ܣ����ɹ��Ž���ȡ���ַ���ֵ��str��
		�����Ų���ʹ�ð�file1�е����ݸ��Ƶ�file2�к�file2�ļ�ĩβ����һ�������ַ��� 
		*/ 
		if((str=fgetc(fp))!=EOF)
		{
			fputc(str,fp1);
		    putchar(str);
		}
	}
	putchar(10); 
	fclose(fp);
	fclose(fp1);
	return 0;
}
