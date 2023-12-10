#include<stdio.h>
#define P printf
#define S scanf
main()
{
	int r,c;
	
	P("Enter Row :");
	  S("%d",&r);
	P("Enter Column :");
	  S("%d",&c);
	  
	int a[r][c];
	int i,j,b;
	
	printf("Enter Elements!!\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] :",i,j);
			  scanf("%d",&a[i][j]);
		}
		
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==j)
			{
				P("%d ",a[i][j]);
				b += a[i][j];
				
			}
		}
		printf("\n");
	}
	printf("%d ",b);

}
