#include<stdio.h>

struct student
{
	int id;
	char name[20];
	int chemistry;
	int physics;
	int maths;
};

void main()
{
	int i;
	struct student s1[5];
	int total[5],per[5];
	
	for(i=0;i<5;i++)
	{
		printf("Enter Roll No :");
		scanf("%d",&s1[i].id);
		fflush(stdin);
		printf("Enter Your Name :");
		scanf("%s",&s1[i].name);
		fflush(stdin);
		printf("Enter The Chemistry Marks :");
		scanf("%d",&s1[i].chemistry);
		printf("Enter The Physics Marks :");
		scanf("%d",&s1[i].physics);
		printf("Enter The Maths Marks :");
		scanf("%d",&s1[i].maths);
		
		total[i] = s1[i].chemistry + s1[i].maths +s1[i].physics;
		per[i]=total[i]/3;
		
		printf("\n");
	}
	
	system("cls");
	for(i=0;i<5;i++)
	{
		printf("\n\n");
		printf("%s (%d)\n",s1[i].name,s1[i].id);
		printf("Chemistry :%d\n",s1[i].chemistry);
		printf("Physics :%d\n",s1[i].physics);
		printf("Maths :%d\n",s1[i].maths);
		printf("Total :%d\n",total[i]);
		printf("Per :%d\n",per[i]);
		printf("\n\n");
	}
}
