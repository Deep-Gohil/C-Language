#include<stdio.h>

main()
{
	int i,j;
	
		for(i=1;i<=7;i++)
		{
			for(j=1;j<=7;j++)
			{
				if(
					(j==4 || (i<=1 && i>=7)) ||
					(i==1 && (j==2 || j==6 || j==3 || j==5)) ||
					(i==7 && (j==2 || j==6 || j==3 || j==5))
					
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
