#include<stdio.h>

main()
{
	int s,e;
	printf("Enter Starting Year ");
	scanf("%d",&s);
	printf("Enter Ending Year ");
	scanf("%d",&e);
	
	int a[s],b[e];
	int i;
	for(i=s;i<=e;i++)
	{
		if(s%4==0)
		{
			printf("%d ",s);
		}
		s++;
	}
}
