#include<stdio.h>
#include "my-function.c"

void main()
{
	
	float per = getGrade();
	printf("%.2f\n",per);
	
	if(per >= 91 && per <=100)
	{
		printf("A1");
	}
	else if(per >= 81 && per <=90)
	{
		printf("A2");
	}
	else if(per >= 71 && per <=80)
	{
		printf("B1");
	}
	else if(per >= 61 && per <=70)
	{
		printf("B2");
	}
	else if(per >= 51 && per <=60)
	{
		printf("C1");
	}
	else if(per >= 41 && per <=50)
	{
		printf("B2");
	}
	else if(per >= 33 && per <=40)
	{
		printf("B1");
	}
	else if(per >=0  && per <=33)
	{
		printf("Batter Luck Next Time !!");
	}
}
