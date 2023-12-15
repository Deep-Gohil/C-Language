#include<stdio.h>

void div()
{
	int n;
	printf("Enter Any Number :");
	  scanf("%d",&n);
	  
	if((n/3 && n/5))
	{
		printf("The Given Number Is Divisible By Both 3 & 5.");
	}
	else
	{
		printf("The Given Number Is Not Divisible By Both 3 & 5.");
	}
}
void main()
{
	div();
}
