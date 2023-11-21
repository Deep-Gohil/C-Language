#include<stdio.h>

main(){
	int a,b,choice;
	
	do{
		printf("1) Addition\n");
		printf("2) Substraction\n");
		printf("3) Multiplication\n");
		printf("4) Division\n");
		printf("Press 0 For Exit!!");
		printf("Enter Any Choice");
		
		scanf("%d",&choice);
		
		switch(choice){
			case 1:
				printf("Enter A & B ");
				   scanf("%d %d",&a,&b);
				   
				printf("Addition Of %d And %d IS :%d",a,b,a+b);
				
			break;
			case 2:
				printf("Enter A & B ");
				   scanf("%d %d",&a,&b);
				   
				printf("Substraction Of %d And %d IS :%d",a,b,a-b);
				
			break;
			case 3:
				printf("Enter A & B ");
				   scanf("%d %d",&a,&b);
				   
				printf("Multiplication Of %d And %d IS :%d",a,b,a*b);
				
			break;
			case 4:
				printf("Enter A & B ");
				   scanf("%d %d",&a,&b);
				   
				printf("Division Of %d And %d IS :%d",a,b,a/b);
				
			break;
			case 0:
				break;
			default:
				printf("Invalid Choice!!");
			
		}
	}while(choice!=0);	
}
