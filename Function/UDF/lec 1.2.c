#include<stdio.h>
#include<conio.h>
main()
{
	int x;
	
	printf("Enter Array Size := ");
	scanf("%d",&x);
	
	printf("Enter the elements of array : \n");
	
	int i,a[x];
	
	for(i=0; i<x; i++)
	{
		printf("a[%d] = ",i);
		scanf("\n%d",&a[i]);
	}
	
	printf("Reverse elements of array are : ");
	
	for(i=x-1; i>=0; i--)
	{
		printf("%d ",a[i]);
		
	}
}