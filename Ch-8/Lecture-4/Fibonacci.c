#include<stdio.h>

main(){
	int n,n1=0,n2=1,n3,i=1;
	
	printf("Enter N Number :");
	   scanf("%d",&n);
	   
	if(n > 2){
		
		printf("0 1 ");
		while(n >= 3){
			n3 = n1 + n2;
			printf("%d ",n3);
			n1 = n2;
			n2 = n3;
			n--;
		}
	}
	else
	{
		while(i<2){
			printf("%d ",i);
			i--;
			
		}
	}
}
