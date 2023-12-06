#include<stdio.h>
#include<conio.h>
main()
{
	int n; 
	
	printf("Enter array size : ");
	scanf("%d",&n);
	
	int i,a[n];
	
	printf("\nEnter array element : \n\n");
	
	for(i=0; i<n; i++)
	{
		printf("a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n");
	
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
	
}
