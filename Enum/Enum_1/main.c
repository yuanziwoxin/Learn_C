#include <stdio.h>
#include <stdlib.h>
/*
ö�����͵�ʹ�ã� 
�ڴ����к졢�ơ������ס���5����ɫ�������ɸ���ÿ�δӿڴ����Ⱥ�ȡ��3����
�ʵõ�3�ֲ�ͬ��ɫ����Ŀ���ȡ�������ÿ�����е������ 
*/ 
int main()
{
	enum Color {red,yellow,blue,white,black}; //����ö������enum Color
	enum Color i,j,k,pri;
	int n,loop;
	n=0;
	for(i=red;i<=black;i++)	//��ѭ��ʹi��ֵ��red�䵽black 
	{
		for(j=red;j<=black;j++)	//��ѭ��ʹj��ֵ��red�䵽black 
		{
			if(i!=j)	//���������ɫ��ͬ 
			{
				for(k=red;k<=black;k++) //��ѭ����k��ֵ��red�䵽black 
				{
					if(k!=i&&k!=j)	//����������ɫ��ͬ 
					{
						n+=1;	//��3�������ɫ����ͬʱ�����ϵ�ȡ�������� 1; 
						printf("%-6d",n);
						for(loop=0;loop<3;loop++) //�ֱ����ȡ��3������д��� 
						{
							//�ؼ����ã����������á� 
							switch (loop)
							{
								case 0:pri=i;break; //��loopֵΪ0ʱ���ѵ�1�������ɫ����pri; 
								case 1:pri=j;break; //��loopֵΪ1ʱ���ѵ�2�������ɫ����pri;
								case 2:pri=k;break; //��loopֵΪ2ʱ���ѵ�3�������ɫ����pri;
								default:break;
							}
							switch (pri)			//���������ɫ�����Ӧ�����֡� 
							{
								case red:printf("\tred");break;	//pri��ֵ����ö�ٳ���redʱ�����"red"; 
								case yellow:printf("\tyellow");break;
								case blue:printf("\tblue");break;
								case white:printf("\twhite");break;
								case black:printf("\tblack");break;
								default:break; 
							}
						}
						printf("\n");
					}
				}
			}
		}
	} 
	printf("\nThe total data is %d\n",n);
	return 0;
}
