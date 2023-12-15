#include<stdio.h>

main()
{
	int n1,n2,i,j;
	
	printf("Enter Size :");
	scanf("%d",&n1);	
	printf("Enter Size :");
	scanf("%d",&n2);
	
	int a[n1],b[n2],c[i];
	for(i=0;i<n1;i++)
	{
		printf("Enter 1st Array Elements");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n2;i++)
	{
		printf("Enter 2nd Array Elements");
		scanf("%d",&b[i]);
	}
	for(i=0;i<n1;i++)
	{
		c[i] = a[i];
	}
	for(i=0;i<n2;i++)
	{
		c[i+n1] = b[i];
	
	}
	for(i=0;i<n1+n2;i++)
	{
		printf("%d",c[i]);
	}
	
}
