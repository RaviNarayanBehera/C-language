#include<stdio.h>
#include<conio.h>
main()
{
	int n;
	
	printf("Enter size of array : ");
	scanf("%d",&n);
	
	int i,j,a[n];
	
	printf("\nEnter element of array :\n");
	
	for(i=0; i<n; i++)
	{
		printf("a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(a[i]>a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("\nAscending Order : ");
	
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
}