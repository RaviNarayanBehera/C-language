#include<stdio.h>
#include<conio.h>
main()
{
	int x;
	printf("Enter size of array : ");
	scanf("%d",&x);
	
	printf("\nEnter element of array : \n");
	
	int i,j;
	int a[x][x];
	
	for(i=0; i<x; i++)
	{
		for(j=0; j<x; j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	int *ptr=&a[i][j];
	
	printf("\nCube of array element : \n");
	
	for(i=0; i<x; i++)
	{
		for(j=0; j<x; j++)
		{
			*ptr=a[i][j]*a[i][j]*a[i][j];
			printf("%d ",*ptr);
		}
		printf("\n");
	}
	
}
