#include<stdio.h>

main(){
	int n;
	
	printf("Enter Any Number :");
        scanf("%d",&n);
    
    if(n > 0){
    		printf("Positive");
	}
	else if(n == 0){
			printf("Nuterel");
	}
	else{
			printf("Negative");
	}
}
