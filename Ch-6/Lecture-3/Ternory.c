#include<stdio.h>

main(){
	
	int a,b,c,small;
	
	printf("Enter A Number :");
	   scanf("%d",&a);
	printf("Enter B Number :");
	   scanf("%d",&b);
	printf("Enter C Number :");
	   scanf("%d",&c);
	   
	small =(a<b)
			? (a<c)
				? a
				: c
			: (b<c)
				? b
				: c;
				
	printf("Small =>%d",small);
	   
}
