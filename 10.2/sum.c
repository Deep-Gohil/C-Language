#include<stdio.h>

int sum(int n,int a[])
{
	int i,sum=0;
	for(i=0;i<n;i++)
	{
		sum += a[i];
	}
//	printf("Sum: %d",sum);
	return sum;
}

void main()
{
	int n,i;
	printf("Enter Array Lenght :");
	   scanf("%d",&n);
	   
	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf("Enter Array Elements :");
		    scanf("%d",&a[i]);
	}
	
	sum(n,a);
	
	printf("sum: %d",sum(n,a));
}
