#include<stdio.h>

main()

{
	int i,j;
	
		for(i=1;i<=10;i++)
		{
			for(j=1;j<=17;j++)
			{
				if(
					(i-j==0 && (i<=4)) ||
					(i+j==8 && (j>=4)) ||
					(j==4 && (i==5 || i==6 || i==7 || i==8 || i==9 ))
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
