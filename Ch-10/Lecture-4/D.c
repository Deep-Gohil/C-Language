#include<stdio.h>

main()
{
	int i,j;
	
		for(i=1;i<=7;i++)
		{
			for(j=1;j<=8;j++)
			{
				if(
					(j==3 || (i<=1 && i>=7)) ||
					(i==1 && (j==1 || j==2 || j==3 || j==4 || j==5 || j==6)) ||
					(i==7 && (j==1 || j==2 || j==3 || j==4 || j==5 || j==6)) ||
					(j==8 && (i==3 || i==4 || i==5)) ||
					(j==7 && (i==2 || i==6))
					
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
		printf("\n");
}
