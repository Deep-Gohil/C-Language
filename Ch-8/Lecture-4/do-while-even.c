#include<stdio.h>

main(){
	int i,n=1;
	
	printf("Enter Starting Position=>");
	   scanf("%d",&i);
	
	do{
		if(i%2==0){
			printf("%d ",i);
		}
		i--;
	}
	while(i>=n);
}
