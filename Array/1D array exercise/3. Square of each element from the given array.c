#include<stdio.h>
#include<conio.h>
main()
{
	int u;
	
	printf("Enter Array size := ");
	scanf("%d",&u);
	
	int i,a[u];
	
	printf("\nEnter array elements :\n");
	
	for(i=0; i<u; i++)
	{
		printf("a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\nThe Squares are : ");
	
	for(i=0; i<u; i++)
	{
		a[u]=a[i]*a[i];
		printf("%d ",a[u]);
	}
	
}