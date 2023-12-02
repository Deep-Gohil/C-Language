#include<stdio.h>

main()
{
	int i,j;
		
		for(i=1;i<=8;i++)
		{
			for(j=1;j<=5;j++)
			{
				if(
					(j==1 || (j<=1 && j>=8)) ||
					(i+j==6)||
					(i-j==2)
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
