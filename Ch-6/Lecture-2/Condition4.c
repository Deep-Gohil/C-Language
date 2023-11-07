#include<stdio.h>
#define P printf
#define S scanf

main(){
	int a,b,c,d;
	
		P("Enter A Number :");
		    S("%d",&a);
		P("Enter B Number :");
		    S("%d",&b);
	    P("Enter C Number :");
		    S("%d",&c);
		P("Enter D Number :");
		    S("%d",&d);
			
	    if(a>b){
			if(a>c){
				if(a>d)
				{
					P("A Is Big");
				}
				else{
					P("D Is Big");
				}
			}
			else{
				if(b>c){
					if(b>d){
						P("B Is Big");
					}
					else{
						P("D Is Big");
					}
				}
			}	    	
		}
		else{
			if(b>c){
				if(b>d){
					P("B Is Big");
				}
				else{
					P("D Is Big");
				}
			}
			else{
				if(c>d){
					P("C Is Big");
				}
				else{
					P("D Is Big");
				}
			}
		}    
		
}
