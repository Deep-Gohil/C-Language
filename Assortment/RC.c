#include<stdio.h>

main()

{
	int r,c;
	
	printf("Enter Row :");
	   scanf("%d",&r);
	printf("Enter Column :");
	   scanf("%d",&c);
	   
	int a[r][c];
	int i,j,row,col,sum=0,summ=0;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter Array Elemnts :");
			  scanf("%d",&a[i][j]);
		}
	}
	printf("Enter Row Number :\n");
		scanf("%d",&row);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			
			if(i == row)
			{
				sum += a[i][j];
				printf("%d ",a[i][j]);
			}
		}
	}
	printf("\nRow Sum IS : %d\n",sum);

	printf("\nEnter Col Number :\n");
	scanf("%d",&col);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			
			if(col == j)
			{
				summ += a[i][j];
				printf("%d ",a[i][j]);
			}
		}
	}
	printf("\nRow Sum IS : %d",summ);
	
	
}
