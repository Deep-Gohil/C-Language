#include<stdio.h>

main()
{
	int i,j;
		
		for(i=1;i<=8;i++)
		{
			for(j=1;j<=5;j++)
			{
				if(
					(j==1 || (i<=1 && i>=8)) ||
					(i==1 || (j<=1 && j>=5)) ||
					(i==4 && (j==2 || j==3 || j==4))
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
