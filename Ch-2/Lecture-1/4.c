#include<stdio.h>

main()
{
   float p,r,n,area;
   
	printf("Enter the principal :");
		scanf("%f",&p);
	printf("Enter the rate of intrest :");
		scanf("%f",&r);
	printf("Enter the time :");
		scanf("%f",&n);
	       area = (p*r*n)/100;
	printf("Simple intrest is :%.2f",area);



}
