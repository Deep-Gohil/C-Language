#include<stdio.h>

main(){
	int english,gujarati,hindi,total;
	
	  printf("Enter English Marks =>");
	      scanf("%d",&english);
	  printf("Enter English Marks =>");
	      scanf("%d",&gujarati);
	  printf("Enter English Marks =>");
	      scanf("%d",&hindi);
	      
	total = (english+gujarati+hindi)/3;
	
	printf("Total Grades Is :",total);
	
	if (total <= 100){
		printf("A1");
	}
	else if(total <= 90) {
		printf("A2");
	}
	else if(total <= 80){
		printf("A3");
	}
	else if(total <= 70){
		printf("B1");
	}
	else if(total <= 60){
		printf("B2");
	}
	else if(total <= 50){
		printf("B3");
	}
	else if(total <= 40){
		printf("C1");
	}
	else if(total <= 33){
		printf("Pass");
	}
	else{
		printf("Fail \n");
		printf("Better Luck Next Time !!");
	}
	
	    
}
