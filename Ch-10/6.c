#include<stdio.h>

main(){
	int i,j,count =1;
		for(i=5;i>=1;i--){
			for(j=5;j>=i;j--){
				printf("%d ",count);
				count ++;
			}
			printf("\n");
		}
}
