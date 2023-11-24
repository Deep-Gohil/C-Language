#include<stdio.h>

main(){
	int n,i,count=0;
	
	printf("Enter Any Number ");
	   scanf("%d",&n);
	   for(i=1;i<=n;i++){
	 		for(j=1;j<=n;j++){
	 			if(i%j == 0){
	 					count++;
				 }			
			 }
			 if(count <= 2){
			 	printf("%d ",i);
			 }
			 count=o;
	   }
}
