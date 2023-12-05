#include<stdio.h>
#include<conio.h>
main()
{
	int n; 
	
	printf("Enter array size : ");
	scanf("%d",&n);
	
	int i,a[n];
	float sum=0;
	
	printf("\nEnter array element : \n\n");
	
	for(i=0; i<n; i++)
	{
		printf("a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<n; i++)
	{
		sum = sum + a[i];
	}
	
	printf("\nAverage of array = %0.2f ",sum/n);
	
}