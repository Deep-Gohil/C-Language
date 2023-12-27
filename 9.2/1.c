#include<stdio.h>
#include<string.h>

main()
{
	int i,A=0,a=0,b=0;
	char n[20];
	
	printf("Enter You're Password :");
	gets(n);
	
	if(strlen(n)>=6)
	{
		for(i=0;i<strlen(n);i++)
		{
			if(n[i]>=65 && n[i]<=90)
			{
				A=1;
			}
			else if(n[i]>=97 && n[i]<=122)
			{
				a=1;
			}
			else if(n[i]>=48 && n[i]<=57)
			{
				b=1;
			}
		}
		
			if(A==1 && a==1 && b==1)
			{
				printf("You're Password Is Strong !!");
			}
			else if(a==1)
			{
				printf("You're Password Is Weak !!");
			}
			else if(b=1)
			{
				printf("you're Password Is Not Strong !!");
			}
			
	}
}
