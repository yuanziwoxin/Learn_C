#include <stdio.h>
#include <stdlib.h>
/*
枚举类型的使用： 
口袋中有红、黄、蓝、白、黑5种颜色的球若干个。每次从口袋中先后取出3个球，
问得到3种不同颜色的球的可能取法，输出每种排列的情况。 
*/ 
int main()
{
	enum Color {red,yellow,blue,white,black}; //声明枚举类型enum Color
	enum Color i,j,k,pri;
	int n,loop;
	n=0;
	for(i=red;i<=black;i++)	//外循环使i的值从red变到black 
	{
		for(j=red;j<=black;j++)	//中循环使j的值从red变到black 
		{
			if(i!=j)	//如果两球颜色不同 
			{
				for(k=red;k<=black;k++) //内循环是k的值从red变到black 
				{
					if(k!=i&&k!=j)	//如果三球的颜色不同 
					{
						n+=1;	//当3个球的颜色各不同时，符合的取法次数加 1; 
						printf("%-6d",n);
						for(loop=0;loop<3;loop++) //分别对所取的3个球进行处理 
						{
							//关键作用：起桥梁作用。 
							switch (loop)
							{
								case 0:pri=i;break; //当loop值为0时，把第1个球的颜色赋给pri; 
								case 1:pri=j;break; //当loop值为1时，把第2个球的颜色赋给pri;
								case 2:pri=k;break; //当loop值为2时，把第3个球的颜色赋给pri;
								default:break;
							}
							switch (pri)			//根据球的颜色输出相应的文字。 
							{
								case red:printf("\tred");break;	//pri的值等于枚举常量red时，输出"red"; 
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
