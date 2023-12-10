#include<stdio.h>

main()
{
	int i,j,s,space=8,spc=2;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
		for(s=1;s<=space;s++)
		{
			printf("  ");
		}
		space-=2;
		for(j=i;j>=1;j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	for(i=4;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
		for(s=1;s<=spc;s++)
		{
			printf("  ");
		}
		spc+=2;
		for(j=i;j>=1;j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}
