#include<stdio.h>

main()
{
	int i,j;
	
		for(i=1;i<=5;i++)
		{
			for(j=11;j<=i*11;j+=11)
			{
				printf("%d ",j);
			}
			printf("\n");
		}
}
