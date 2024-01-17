#include<stdio.h>
#include<conio.h>
main()
{
	int a[10],n,i,max;
	int *ptr;
	printf("Enter the size of array: ");
  	scanf("%d",&n);
	
	printf("Enter elements of array:\n",n);
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	printf("Elements in the array are:\n");
	for(i=0;i<n;i++)	
	{
		printf("%d\n",a[i]);
		ptr=&a[0];
		max=a[0];
	}
	for(i=0;i<n;i++)
	{
		if(max<=*ptr)
		max=*ptr;
		ptr++;
	}
	
	printf("\nMaximum element in the array is: %d",max);
}