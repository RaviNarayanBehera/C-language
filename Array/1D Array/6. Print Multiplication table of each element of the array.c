#include<stdio.h>
#include<conio.h>
main()
{
	int m;
	
	printf("Enter no.:= ");
	scanf("%d",&m);
	
	int i,j,a[m];
	
	printf("\nEnter array element : \n\n");
	
	for(i=0; i<m; i++)
	{
		printf("a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n");
	
	for(i=0; i<m; i++)
	{
		for(j=1; j<=10; j++)
		{
			printf("%d * %d = %d\n",a[i],j,a[i]*j);
		}
		printf("\n");
	}
}