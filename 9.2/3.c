#include<stdio.h>
#include<string.h>

main()
{
	char name[20];
	strupr(name);
	printf("Enter Any Name :");
	scanf("%s",name);
	printf("Output:%s",strupr(name));
}
