#include<stdio.h>

main()
{
	FILE *fp1,*fp2;
	
	fp1 = fopen("even.txt","a");
	fp2 = fopen("odd.txt","a");
	
	int i;
	if(fp1 != NULL)
	{
		for(i=50;i<70;i++)
		{
			if(i%2==0)
			{
				fprintf(fp1,"%d ",i);
			}
			else
			{
				fprintf(fp2,"%d ",i);
			}
		}
	}
	
	
}
