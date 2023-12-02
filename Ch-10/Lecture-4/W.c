#include<stdio.h>

main()

{
	int i,j;
	
		for(i=1;i<=6;i++)
		{
			for(j=1;j<=17;j++)
			{
				if(
					(i-j==0) ||
					((j+i==12 && (i>=3))) ||
					(i>=4 && (j-i==6)) ||
					(j+i==18)
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
