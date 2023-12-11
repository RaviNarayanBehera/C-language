#include<stdio.h>
#include<conio.h>
main()
{
	int x;
	
	printf("Enter size of row and column : ");
	scanf("%d,",&x);
	
	int i,j,a[x][x];
	
	printf("\nEnter element of array :\n");
	
	for(i=0; i<x; i++)
	{
		for(j=0; j<x; j++)
		{
			printf("a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\nOutput : \n");
	
	for(i=0; i<x; i++)
	{
		for(j=0; j<x; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\nDiagonals are : ");
	
	int sum;
	
	for(i=0; i<x; i++)
	{
		for(j=0; j<x; j++)
		{
			printf("%d ",a[i][j]);
			sum = sum + a[i][j];
			i++;
		}
	}
	
	printf("\n\nSum of diagonals are : %d",sum);
	
}