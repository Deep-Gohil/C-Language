#include<stdio.h>

main()
{
	int i,j;
		
		for(i=1;i<=8;i++)
		{
			for(j=1;j<=4;j++)
			{
				if(
					(j==1 || (i<=1 && i>=8)) ||
					(i==1 && (j==2 || j==3)) ||
					(j==4 && (i==2 || i==3)) ||
					(i==4 && (j==2 || j==3)) ||
					(i==5 && (j==2 || j==3)) ||
					(i==8 && (j==2 || j==3)) ||
					(j==4 && (i==6 || i==7))	
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