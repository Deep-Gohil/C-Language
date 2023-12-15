#include<stdio.h>

main()
{
	int n;
	printf("Enter Size :");
	   scanf("%d",&n);
	   
	int a[n],sqr=0;
	int i;
	
	for(i=0;i<n;i++)
	{
		printf("Enter Array Elements :");
		  scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sqr = a[i]*a[i];
		printf("%d ",sqr);
		
	}
}
