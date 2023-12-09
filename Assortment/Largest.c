#include<stdio.h>

main()

{
	int r,c;
	
	printf("Enter Row :");
	   scanf("%d",&r);
	printf("Enter Column :");
	   scanf("%d",&c);
	   
	int a[r][c],b[r][c];
	int i,j,count=0;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter Array Elemnts :");
			  scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(count < a[i][j]);
			{
				count = a[i][j];
			}
		}
	}
	printf("Largest Element Is :%d",count);
}
