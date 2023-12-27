#include<stdio.h>
#include<string.h>

main()
{
	char email[30],pass[30],re_email[30],re_pass[30];
	printf("Enter You're Email :");
	gets(email);
	printf("Enter You're Password :");
	gets(pass);
	
	printf("Login Successful !!\n");
	
	printf("Re-Enter You're Email :");
	gets(re_email);
	printf("Re-Enter You're Password :");
	gets(re_pass);
	
	if(strcmp(email,re_email)==0 && (strcmp(pass,re_pass))==0)
	{
		printf("Login Successful Valid Credentials.\n");
	}
	else
	{
		printf("Login Failed. Invalid Credentials.\n");
	}
	
}
