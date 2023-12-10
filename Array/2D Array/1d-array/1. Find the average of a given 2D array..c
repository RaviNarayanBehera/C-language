#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	
	printf("Enter size of row : ");
	scanf("%d",&a);
	
	printf("Enter size of column : ");
	scanf("%d",&b);

	int x[a][b],i,j;
	
	printf("\nEnter array's element :\n");
	
	for(i=0; i<a; i++)
	{
		for(j=0; j<b; j++)
		{
			printf("x[%d][%d] = ",i,j);
			scanf("%d",&x[i][j]);
		}
		printf("\n");
	}
	float sum=0;
	
	for(i=0; i<a; i++)
	{
		for(j=0; j<b; j++)
		{
			sum = sum + x[i][j];
		}
	}

	printf("\nAverage of array : %0.2f",sum/(a*b));
		
}
