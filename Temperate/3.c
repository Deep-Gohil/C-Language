#include<stdio.h>

main()

{
      int n,a;

      printf("Enter The Any Number :");
      scanf("%d",&n);
      a= n%10;
      while(n>10){

	     n=n/10;

      }
      printf("You're First And Last Number Total Is : %d",a+n );

}
