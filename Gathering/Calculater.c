#include<stdio.h>

int getInt()
{
	int n;
	scanf("%d",&n);
	return n;
}

void sum()
{
	int a,b;
    printf("Enter A Number :");
    a = getInt();
    printf("Enter B Number :");
    b = getInt();
    
    printf("Addition Of %d And %d Is: %d",a,b,a+b);
    
}

void sub()
{
	int a,b;
    printf("Enter A Number :");
    a = getInt();
    printf("Enter B Number :");
    b = getInt();
    
    printf("Substraction Of %d And %d Is: %d",a,b,a-b);
    
}

void mul()
{
	int a,b;
    printf("Enter A Number :");
    a = getInt();
    printf("Enter B Number :");
    b = getInt();
    
    printf("Multiplication Of %d And %d Is: %d",a,b,a*b);
    
}

void div()
{
	int a,b;
    printf("Enter A Number :");
    a = getInt();
    printf("Enter B Number :");
    b = getInt();
    
    printf("Division Of %d And %d Is: %d",a,b,a/b);
    
}

void mod()
{
	int a,b;
    printf("Enter A Number :");
    a = getInt();
    printf("Enter B Number :");
    b = getInt();
    
    printf("Division Of %d And %d Is: %d",a,b,a%b);
    
}

void main()
{
	int choice;
	
	do
	{
		printf("\n1) Addition \n");
		printf("2) Substraction \n");
		printf("3) Multiplication\n");
		printf("4) Division \n");
		printf("5) Modulus \n");
		printf("Press 0 For Exit\n");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				sum();
				break;
			case 2:
				sub();
				break;
			case 3:
				mul();
				break;
			case 4:
				div();
				break;
			case 5:
				mod();
				break;
			default:
				printf("\ninvalid Choice !!\n");
		}
	}
	while(choice!=0);
}
