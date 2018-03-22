#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*
从键盘读入若干个字符串，对它们按字母顺序排序，然后把排好序的字符串送入磁盘文件中保存。 （使用指针数组，出了bug,待解决） 
*/
int main()
{
	FILE *fp,*fp1;
	char str[3][10],s[3][10],temp[10];
	int i,j,k,n=3;
	printf("Please enter some strings:\n");
	for(i=0;i<n;i++)
	{
		//scanf("%s",str[i]);
		gets(str[i]);
	} 
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
		{
			if(strcmp(str[k],str[j])>0)
			{
				//printf("--strcmp----\n");
				k=j;
			}
		}
		//注意：每次找出剩余的（n-i-1）字符串中排序最小的字符串，然后才将该字符串与第i个位置上的字符串进行交换。 
		if(k!=i)
		{
			//printf("--strcpy----\n");
			strcpy(temp,str[i]);
			strcpy(str[i],str[k]);
			strcpy(str[k],temp);
		}
	}
	if((fp=fopen("file1","w"))==NULL)
	{
		printf("cannot open the file!");
		exit(0);
	}
    for(i=0;i<n;i++)  //将字符串一个一个写入文件中 
    {
    	fputs(str[i],fp);
    	fputs("\n",fp);//每输出一个字符串，输出一个换行符
		printf("%s\n",str[i]); 
	}
	fclose(fp);//一定要先关闭只写文件，再打开只读文件。 
	if((fp1=fopen("file1","r"))==NULL)
	{
		printf("cannot open the file!\n");
		exit(0);
	} 
	printf("Read the string from file:\n");
	i=0; 
	while(fgets(s[i],10,fp1)!=NULL) //从文件中一个一个读出所有字符串 
	{
		printf("%s",s[i++]);
	}
	fclose(fp1); 
	return 0;
}

/*
int main()
{
	FILE *fp,*fp1;
	char *str[3],*temp;//为什么使用指针数组后就出现问题？ 
	int i,j,k,n=3;
	printf("Please enter some strings:\n");
	for(i=0;i<n;i++)
	{
		//scanf("%s",str[i]);
		gets(str[i]);
	} 
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
		{
			if(strcmp(str[k],str[j])>0)
			{
				k=j;
			}
		}
		if(k!=i)
		{
			strcpy(temp,str[i]);
			strcpy(str[i],str[k]);
			strcpy(str[k],temp);
		}
	}
	if((fp=fopen("file1","w"))==NULL)
	{
		printf("cannot open the file!");
		exit(0);
	}
    for(i=0;i<n;i++)
    {
    	fputs(str[i],fp);
    	fputs("\n",fp);//每输出一个字符串，输出一个换行符
		printf("%s\n",str[i]); 
	}
	fclose(fp);
	return 0;
}
*/
