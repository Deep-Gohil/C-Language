#include<stdio.h>


main()
{
	int i,j;
	
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=7;j++)
		{
			if(
				(i==1 || (j<=1 && j>=7)) ||
				(i==7 || (j<=1 && j>=7)) ||
				(j==1 || (i<=1 && i>=7)) ||
				(j==7 || (i<=1 && i>=7)) 			
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
