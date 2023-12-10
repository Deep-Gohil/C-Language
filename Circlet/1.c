#include<stdio.h>

main()
{
	int i,j,c=11;
	
		for(i=11;i<=60;i+=11)
		{
			for(j=11;j<=i;j+=11)
			
			{
				printf("%d ",c);
				c+=11;
			}
			printf("\n");
		}
}
