#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*
�Ӽ��̶������ɸ��ַ����������ǰ���ĸ˳������Ȼ����ź�����ַ�����������ļ��б��档 ��ʹ��ָ�����飬����bug,������� 
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
		//ע�⣺ÿ���ҳ�ʣ��ģ�n-i-1���ַ�����������С���ַ�����Ȼ��Ž����ַ������i��λ���ϵ��ַ������н����� 
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
    for(i=0;i<n;i++)  //���ַ���һ��һ��д���ļ��� 
    {
    	fputs(str[i],fp);
    	fputs("\n",fp);//ÿ���һ���ַ��������һ�����з�
		printf("%s\n",str[i]); 
	}
	fclose(fp);//һ��Ҫ�ȹر�ֻд�ļ����ٴ�ֻ���ļ��� 
	if((fp1=fopen("file1","r"))==NULL)
	{
		printf("cannot open the file!\n");
		exit(0);
	} 
	printf("Read the string from file:\n");
	i=0; 
	while(fgets(s[i],10,fp1)!=NULL) //���ļ���һ��һ�����������ַ��� 
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
	char *str[3],*temp;//Ϊʲôʹ��ָ�������ͳ������⣿ 
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
    	fputs("\n",fp);//ÿ���һ���ַ��������һ�����з�
		printf("%s\n",str[i]); 
	}
	fclose(fp);
	return 0;
}
*/
