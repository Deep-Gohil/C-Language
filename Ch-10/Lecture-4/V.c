#include<stdio.h>

main()
{
	int i,j;
	
		for(i=1;i<=8;i++)
		{
			for(j=1;j<=6;j++)
			{
				if(
					(j==1 && (i==1 || i==2 || i==3 || i==4 || i==5 || i==6)) ||
					(j==6 && (i==1 || i==2 || i==3 || i==4 || i==5 || i==6)) ||
					(i==7 && (j==2 || j==5)) ||
					(i==8 && (j==3 || j==4))
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
