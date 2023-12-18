#include<stdio.h>

float getGrade()
{
	int sub1,sub2,sub3,sub4,sub5,sub6,sub7,total;
	float grade;
	
	printf("Enter Subject 1 Marks :");
	  scanf("%d",&sub1);
	printf("Enter Subject 2 Marks :");
	  scanf("%d",&sub2);
	printf("Enter Subject 3 Marks :");
	  scanf("%d",&sub3);
	printf("Enter Subject 4 Marks :");
	  scanf("%d",&sub4);
	printf("Enter Subject 5 Marks :");
	  scanf("%d",&sub5);
	printf("Enter Subject 6 Marks :");
	  scanf("%d",&sub6);
	printf("Enter Subject 7 Marks :");
	  scanf("%d",&sub7);
	  
	total = sub1+sub2+sub3+sub4+sub5+sub6+sub7;
	grade = total/7;
	
	return grade;
}
