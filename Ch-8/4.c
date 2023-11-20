#include<stdio.h>

main(){
	int i,n=1;
	
	printf("Enter Starting Position=>");
	   scanf("%d",&i);
	
	while(i>=n){
		if(i%2==1){
			printf("%d ",i);
		}
		i--;
	}
}
