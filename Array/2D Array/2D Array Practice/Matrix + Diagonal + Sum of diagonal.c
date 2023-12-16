#include<stdio.h>
#include<conio.h>
main()
{
	int m;
	
	printf("Enter size of Row & Column : ");
	scanf("%d",&m);
	
	int a[m][m],i,j;
	
	printf("\nEnter array's element : \n");
	
	for(i=0; i<m; i++)
	{
		for(j=0; j<m; j++)
		{
			printf("a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	printf("\nMatrix are : \n");
	
	for(i=0; i<m; i++)
	{
		for(j=0; j<m; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\nDiagonal's are : ");
	int sum;
	for(i=0; i<m; i++)
	{
		for(j=0; j<m; j++)
		{
			printf("%d ",a[i][j]);
			
			sum=sum+a[i][j];
			i++;
		}
	}
	
	printf("\n\nThe sum of diagonal elements of an Array : %d ",sum);
	
}