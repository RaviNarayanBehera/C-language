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
	
	printf("\nEnter array X's element :\n");
	
	for(i=0; i<a; i++)
	{
		for(j=0; j<b; j++)
		{
			printf("x[%d][%d] = ",i,j);
			scanf("%d",&x[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	int y[a][b];
	
	printf("\nEnter array Y's element :\n");
	
	for(i=0; i<a; i++)
	{
		for(j=0; j<b; j++)
		{
			printf("y[%d][%d] = ",i,j);
			scanf("%d",&y[i][j]);
		}
		printf("\n");
	}
	
	int z[a][b];
	
	printf("\nArray Z is :\n");
	
	for(i=0; i<a; i++)
	{
		for(j=0; j<b; j++)
		{
			z[i][j] = x[i][j] + y[i][j];
			printf("%d ",z[i][j]);
		}
		printf("\n");
	}
	
}
	
	
