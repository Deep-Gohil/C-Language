#include<stdio.h>

main(){
	int i=1,n;
	
	printf("Enter Any Number ");
	   scanf("%d",&n);
	
	do{
		if(n%2==0){
			printf("%d ",n);
			i++;
		}
	}while(i<=10);
}
