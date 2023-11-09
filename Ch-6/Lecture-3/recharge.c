#include<stdio.h>

main(){
	int choice,en,hi,gu;
	
	printf("1) English \n");
	printf("2) Hindi \n");
	printf("3) Gujarati \n");
	printf("Enter You're Choice :");
	   scanf("%d",&choice);
	   
	   switch(choice){
	   		case 1:
	   			printf("Press 1 For Internet Recharge \n");
	   			printf("Press 2 For Top-up Recharge \n");
	   			printf("Press 3 For Special Recharge \n");
	   			printf("Enter You're Choice :");
	   			   scanf("%d",&en);
	   			     switch(en){
	   			   		case 1:
	   			   			printf("You Have Successfully Done Internet Recharge\n");
	   			   			break;
	   			   		case 2:
	   			   			printf("You Have Successfully Done Top-up Recharge\n");
	   			   			break;
	   			   		case 3:
	   			   			printf("You Have Successfully Done Special Recharge\n");
	   			   			break;
					  }
			break;
			case 2:
				printf("Internet Rechage Ke liye 1 Dabaye\n");
				printf("Top-up Recharge Ke Liye 2 Dabaye\n");
				printf("Special Recharge Ke Liye 3 Dabaye\n");
				printf("Enter You're Choice");
				   scanf("%d",&hi);
				   
				   switch(hi){
				   	    case 1:
				   	    	printf("Aapne Safaltapurvak Internet Recharge Kar Liya Hai\n");
				   	    	break;
				   	    case 2:
				   	    	printf("Aapne Safaltapurvak Top-up Recharge KarLiya Hai\n");
				   	    	break;
				   	    case 3:
				   	    	printf("Aapne Safaltapurva Special Rechage Kar Liya Hai\n");
				   	    	break;
				   }
			break;
			case 3:
			      printf("Internet Recharge Mate 1 Dabavo\n");
				  printf("Top-up Recharge Mate 2 Dabbavo\n");
				  printf("Special Recharge Mate 3 Dabavo\n");
				  printf("Enter You're Choice");
				      scanf("%d",&gu);
					  
					  switch(gu){
					  	   case 1:
							    printf("Tame Safaltapurvak Internet Karyu Chhe\n");
							    break;
							case 2:
							    printf("Tame Safaltapurvak Top-up Recharge Karyu Chhe\n");
							    break;
							case 3:
							    printf("Tame Safaltapurvak Special Recharge Karyu Chhe\n");
								break; 
					  }	   
			break;
	    }
}

