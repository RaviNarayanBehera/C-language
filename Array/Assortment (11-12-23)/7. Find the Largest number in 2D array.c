#include<stdio.h>
#include<conio.h>
main()
{
	int x;
	
	printf("Enter size of row and coulmn : ");
	scanf("%d",&x);
	
	int i,j,a[x][x];
	
	printf("\nEnter elements of array :\n");
	
	for(i=0; i<x; i++)
	{
		for(j=0; j<x; j++)
		{
			printf("a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	int largest;
	
	printf("\nOutput :\n");
	
	for(i=0; i<x; i++)
	{
		for(j=0; j<x; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	

	
	for(i=0; i<x; i++)
	{
		for(j=0; j<x; j++)
		{
			if(largest<a[i][j])
			{
				largest=a[i][j];
			}	
		}
	}
		printf("\n Largest number : %d",largest);
}