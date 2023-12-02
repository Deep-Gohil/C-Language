#include<stdio.h>

main()
{
	int i,j;
		
		for(i=1;i<=7;i++)
		{
			for(j=1;j<=9;j++)
			{
				if(
					(j==1 || (i<=1 && i>=7)) ||
					(j==9 || (i<=1 && i>=7)) ||
					(j==2 && i==1) ||
					(j==3 && i==2) ||
					(j==4 && i==3) ||
					(j==5 && i==4) ||
					(j==6 && i==5) ||
					(j==7 && i==6) ||
					(j==8 && i==7)
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
