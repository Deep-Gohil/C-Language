#include<stdio.h>

main()

{
     int n,count=0;

     printf("Enter Any Number :");
     scanf("%d",&n);

     while (n!=0){
	   n=n/10;
	   count++;

     }
     printf("Count =%d",count);

}
