#include<stdio.h>

main()
{
	char a[200];
	int i;
	
	printf("Enter Youre Name :");
	  gets(a);
	  
	for(i=0;i<200;i++)
	{
		if(a[i]>=97 && a[i]<=122)
		{
			a[i] -= 32;
		}
		else if(a[i]>=65 && a[i]<=90)
		{
			a[i] += 32;
		}
	}
	
	puts(a);
}
