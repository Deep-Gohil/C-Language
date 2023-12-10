#include<stdio.h>

main()
{
	int r,c;
	
	printf("Enter Row :");
	   scanf("%d",&r);
	printf("Enter Row :");
	   scanf("%d",&c);
	   
	int a[r][c],avg[r][c];
	int i,j;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter Array Alements :");
			  scanf("%d",&a[r][c]);
			avg[r][c] += a[r][c];
		}
	}
	
	printf("%.2f ",(float)avg[r][c]/(r*c));
}
