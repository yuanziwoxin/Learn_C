#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
将一个磁盘文件中的信息复制到另一个磁盘文件中 
*/
int main()
{
	FILE *fp,*fp1;
	char str,infile[10],outfile[10];
	printf("Please enter the file name you want to read: ");
	scanf("%s",infile);//输入一个读入文件的名字 
	printf("Please enter the file name you want to write: ");
	scanf("%s",outfile);//输入一个输出文件的名字 
    //方法一：按文本文件方式处理 
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
	//方法二：按二进制文件处理（“rb”和“wb”） 
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
		要判断一下读字符是否失败，若成功才将读取的字符赋值给str。
		这样才不会使得把file1中的内容复制到file2中后，file2文件末尾会多出一个特殊字符。 
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
