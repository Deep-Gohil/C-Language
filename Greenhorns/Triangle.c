#include<stdio.h>

main(){
	int a,b,c;
	
	printf("Enter Triangle One Size :");
	   scanf("%d",&a);
	   
	printf("Enter Triangle 2nd Size :");
	   scanf("%d",&b);
	   
	c = 180 - (a + b);
	
	printf("Third Side Of Triangle Is :%d",c);
	
}
