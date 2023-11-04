#include<stdio.h>

main(){
	float s,h,t,d,g;
	
	printf("Enter Base Salary :");
	   scanf("%f",&s);
	   
	h = (s * 0.10);
	d = (s * 0.05);
	t = (s * 0.08);
	
	printf("HRA :%.2f\nDA :%.2f\nTA :%.2f ",h,d,t);
	
	g = s+h+d+t;
	
	printf("\nGross Salary Is :%.2f",g);
}
