#include<stdio.h>

main()
{
	char a[30];
	int i;
	
	printf("Enter You're Name :");
	   gets(a);
	for(i=0;i<30;i++)
	{
		if(a[i]>=65 && a[i]<=90)
		{
			a[i] += 32;
		}
	}
	puts(a);
}
