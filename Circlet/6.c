#include<stdio.h>

main(){
	int i,j,s,space=4;
	
	for(i=1;i<=5;i++)
	{
		for(s=1;s<=5-i;s++)
		{
			printf("  ");
		}
		for(j=1;j<=(2*i)-1;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	for(i=5;i>=1;i--)
	{
		for(s=1;s<=5-i;s++)
		{
			printf("  ");
		}
		for(j=1;j<=(2*i)-1;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}
