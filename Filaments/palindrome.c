#include<stdio.h>

main()

{
	char name[20];
	int i,len=0;
	
	printf("Enter You're Name :  ");
	  scanf("%d[^\n]",&name);
	  
	for(i=0;name[i] != '\0'; i++)
	{
		len++;
	}
	
	char names[len];
	
	for(i=0;i<len;i++)
	{
		names[len-i-1] = name[i];
	}
	
	for(i=0;i<len;i++)
	{
		if(name[i] - names[i] == 0)
		{
			printf("You're Name Is Palindrome !!");
			break;
		}
		else
		{
			printf("You're Name Is Not Palindrome !!");
			break;
		}
	}
}
