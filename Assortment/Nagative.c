#include<stdio.h>

main()
{
	int r;
	
	printf("Enter Array Size :");
	   scanf("%d",&r);
	   
	int a[r];
	int i;
	
	for(i=0;i<r;i++)
	{
		printf("Enter Array Elements :");
		   scanf("%d",&a[i]);
	}
	for(i=0;i<r;i++)
	{
		if(a[i]<0)
		{
			printf("Nagative Element Is : %d ",a[i]);
		}
		else
		{
			printf("  ");
		}
	}
}
