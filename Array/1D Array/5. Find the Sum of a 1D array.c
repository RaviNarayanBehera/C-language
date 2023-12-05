#include<stdio.h>
#include<conio.h>
main()
{
	int u;
	
	printf("Enter array size : ");
	scanf("%d",&u);
	
	int i,a[u],sum=0;
	
	printf("\nEnter array elements : \n\n");
	
	for(i=0; i<u; i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<u; i++)
	{
		sum = sum + a[i];
	}
	
	printf("\nSum of array = %d",sum);
}