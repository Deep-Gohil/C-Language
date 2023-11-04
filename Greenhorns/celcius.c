#include<stdio.h>

main(){
	int c;
	float f;
	
	printf("Enter Celcius :");
	   scanf("%d",&c);
	   
    f = (c * 9/5 ) + 32;
    
	printf("Fahrenheit Is :%.2f",f);   
	   
}
