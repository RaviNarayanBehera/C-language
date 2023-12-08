#include<stdio.h>
#include<conio.h>
main()
{
	printf("Enter array's element :\n");
	int i,j,a[5][5];
	
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			printf("a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	int sum;
	
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			if(i==0 || i==4 || j==0 || j==4)
			{
				printf("%d ",a[i][j]);
				sum=sum+a[i][j];
			}
			else
			{
				printf("  ");
			}
		
		}
		printf("\n");
	}
	printf("\nSum of Boundary elements of an array : %d",sum);
	
}
