#include<stdio.h>

main(){
	
	int s,e,i;
	
		printf("Enter Starting Year=>");
		    scanf("%d",&s);
		printf("Enter Ending Year=>");
		    scanf("%d",&e);
		    
		while(s<=e)
		{
			if(s%4==0)
			{
				printf("%d ",s);
			}
			s++;
		}
}
