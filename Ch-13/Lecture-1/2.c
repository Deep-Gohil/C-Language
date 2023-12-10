#include<stdio.h>

main()
{
	int r,c;
	
	printf("Please Enter Row And Column Of Matrix\nNOTE = Row And Column Should Be Same\n");
	printf("Enter Row :");
	  scanf("%d",&r);
	printf("Enter Row :");
	  scanf("%d",&c);
	  
	if(r==c){
	
	int a[r][c],b[r][c],sum[r][c];
	int i,j;
	
	printf("Enter A Elements!!\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] :",i,j);
			  scanf("%d",&a[r][c]);
		}
	}
	
	printf("\nEnter B Elements!!\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("b[%d][%d] :",i,j);
			  scanf("%d",&b[r][c]);
		}
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum[r][c] = a[r][c] + b[r][c];
			printf("%d ",sum[r][c]);
		}
		printf("\n");
	}
	
	}
	else{
		printf("Row And Column Are Not Same!!\nPlease Try Again!!");
	}
}
