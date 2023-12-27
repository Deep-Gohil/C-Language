#include<stdio.h>

main()
{
	int a,b;
	printf("Enter X :");
	scanf("%d",&a);
	printf("Enter Y :");
	scanf("%d",&b);
	
	int *x,*y;
	
	x = &a;
	y = &b;
	
	*x = *x + *y;
	*y = *x - *y;
	*x = *x - *y;
	
	printf("X :%d\n",*x);
	printf("Y :%d",*y);
}
