#include<stdio.h>

main(){
	int n,rem,rev=1;
	
	printf("Enter Any Number :");
	   scanf("%d",&n);
	   
	while(n!=0){
		rem = n%10;
		rev = rev*10+rem;
		n = n/10;
		
	}
	printf("Reverse Is : %d",rev);
}
