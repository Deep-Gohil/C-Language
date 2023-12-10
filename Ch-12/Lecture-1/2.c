#include<stdio.h>

main()
{
	int n,i;
	float sum,avg;
	
	printf("Enter Array Size :");
	   scanf("%d",&n);
	   
	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf("%d) Enter Array Elements :",i+1);
		   scanf("%d",&a[i]);
		
		//sum =+ i;
	}
	
	avg = a[i]/n;
	
	printf("Average of an Array :%.2f",avg);
}
