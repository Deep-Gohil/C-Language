#include<stdio.h>

main()
{
	int n;
	printf("Enter Array Lenghth :");
	scanf("%d",&n);
	
	int a[n];
	int i,*ptr,square;
	for(i=0;i<n;i++)
	{
		printf("Enter Array Elements :");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		ptr[i] = a[i];
	}
	
	for(i=0;i<n;i++)
	{
		square = (ptr[i]*ptr[i]);
		printf("Square Of Each Elements Is:%d\n",square);
	}
}
