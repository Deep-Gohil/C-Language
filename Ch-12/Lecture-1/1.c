#include<stdio.h>

main()
{
	int n;
	
	printf("Enter Array Size :");
	    scanf("%d",&n);
	    
	int a[n],i;
	
	for(i=0;i<n;i++)
	{
		printf("%d)Enter Array Elements :",i+1);
		scanf("%d",&a[i]);
	}
	printf("Total Elements Is :%d",n);
}
