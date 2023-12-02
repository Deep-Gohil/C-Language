#include<stdio.h>

main()
{
	int i,j;
		
		for(i=1;i<=8;i++)
		{
			for(j=1;j<=6;j++)
			{
				if(
					(i==1 || (j<=1 && j>=6)) ||
					(i==8 || (j<=1 && j>=6)) ||
					(j==1 || (i<=1 && i>=8))	
				)
				{
					printf("* ");
				}
				else
				{
				printf("  ");
				}
			}
			printf("\n");
		}
}
