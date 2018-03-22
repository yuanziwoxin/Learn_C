#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
从键盘输入一些字符，逐个把它们送到磁盘上去，直到用户输入一个“# ”为止 
*/

int main()
{
	char c,filename[20];
	FILE *fp;
	printf("Please enter the file name:\n");
	scanf("%s",filename);
	//注意：不能把if这段代码放在while循环中，这样会导致每输入一个字符都创建一个新文件。 
	if((fp=fopen(filename,"w"))==NULL)//打开一个“只写”的文件，并使fp指向此文件 
	{
		printf("cannot open the file!\n");
		exit(0);
	}
	c=getchar();//用于接收输入完文件名后输入的回车符 
	printf("Please enter some characters:\n");
	while((c=getchar())!='#')
	{
		fputc(c,fp);//向磁盘文件输出一个字符； 
		putchar(c);//将输出的字符显示在屏幕上。 
	} 
	fclose(fp);
	putchar(10);//向屏幕输出一个换行符 
	return 0;
}

