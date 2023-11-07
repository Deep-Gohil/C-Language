#include<stdio.h>
#define P printf
#define S scanf

main(){
	int a,b,c;
	
		P("Enter A Number :");
		   S("%d",&a);
		P("Enter B Number :");
		   S("%d",&b);
		P("Enter C Number :");
		   S("%d",&c);
		   
		if(a<b){
			if(a<c){
				P("A Is Small");
			}
			else{
				P("C Is Samll");
			}
		}
		else{
			if(b<c){
				P("B Is Small");
			}
			else{
				P("C Is Small");
			}
		}
}

