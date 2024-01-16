#include<stdio.h>
#include<conio.h>
main()
{
	int n;
	
	printf("Enter size of array : ");
	scanf("%d",&n);
	
	int i,a[n];
	
	printf("\nEnter Array's Element :\n");
	for(i=0; i<n; i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	int *ptr;
	printf("\nSquare of Each Element :\n");
	for(i=0; i<n; i++)
	{
		ptr=&a[i];
		printf("%d\n",*ptr*a[i]);
		
	}
	
}