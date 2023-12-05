#include<stdio.h>
#include<conio.h>
main()
{
	int n; 
	
	printf("Enter array size : ");
	scanf("%d",&n);
	
	int i,a[n],b[n];
	
	printf("\nEnter array element.1.: \n\n");
	
	for(i=0; i<n; i++)
	{
		printf("a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\nEnter array element.2.: \n\n");
	
	for(i=0; i<n; i++)
	{
		printf("b[%d] : ",i);
		scanf("%d",&b[i]);
	}
	
	printf("\n");
	
	int sum[n];
	
	printf("Array C is : ");
	
	for(i=0; i<n; i++)
	{
		sum[n] = a[i]+b[i];
		printf("%d ",sum[n]);
	}
}