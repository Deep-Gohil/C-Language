#include<stdio.h>

main()
{
	int i,j;
		
		for(i=1;i<=8;i++)
		{
			for(j=1;j<=7;j++)
			{
				if(
					(i==1 || (j<=1 && j>=7)) ||
					(j==4 && (i==2 || i==3 || i==4 || i==5 || i==6 || i==7)) ||
					(i==7 && (j==1 || j==4)) ||
					(i==8 && (j==2 || j==3))
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
