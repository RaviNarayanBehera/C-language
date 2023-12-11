#include<stdio.h>
#include<conio.h>
main()
{
	int u;
	
	printf("Enter array size := ");
	scanf("%d",&u);
	
	int i,j,a[u];
	
	printf("\nEnter array element :\n\n");
	
	for(i=0; i<u; i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\nThe input array elements are : \n");
	for(i=0; i<u; i++)
	{
		printf("%d ",a[i]);
	}
	
	printf("\n\nReverse array elements are : \n");
	{
		for(i=0; i<u; i++)
		{
			for(j=i+1; j<u; j++)
			{
				a[u] = a[i];
				a[i] = a[j];
				a[j] = a[u];
			}
		}			
				
	}

	for(i=0; i<u; i++)
	{
		printf("%d ",a[i]);
	}
}
