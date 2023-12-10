#include<stdio.h>

main()
{
	int r,c;
	
	printf("Enter Row :");
	  scanf("%d",&r);
	printf("Enter Column :");
	  scanf("%d",&c);
	  
	int a[r][c];
	int i,j;
	
	printf("Enter Array Elements !!\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\nDiagonal Elements !!\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==j)
			{
				printf("%d ",a[i][j]);
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	
	printf("\nAnti Diagonal Elements !!\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i+j==r-1)
			{
				printf("%d ",a[i][j]);
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	
	printf("\nCross Diagonal Elements !!\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==j || i+j==r-1)
			{
				printf("%d ",a[i][j]);
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	
	printf("\nBoundry Elements !!\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==0 || j==0 || i==r-1 || j==c-1)
			{
				printf("%d ",a[i][j]);
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
}
