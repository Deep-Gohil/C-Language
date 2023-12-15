#include<stdio.h>
#include<string.h>

main()
{
	char string[25];
	int i,j;
	
	printf("Enter Any Name : ");
	gets(string);
	
	int f[strlen(string)];
	
	for(i=0;i<strlen(string);i++)
	{
		f[i] = 1;
		
		for(j=i+1; j<strlen(string);j++)
		{
			if(string[i] - string[j] == 0)
			{
				f[i]++;
			}
		}
		printf("%c %d \n",string[i],f[i]);
	}
}
