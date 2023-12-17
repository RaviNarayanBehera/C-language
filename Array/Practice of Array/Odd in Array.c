#include<stdio.h>
#include<conio.h>
main()
{
	int x;
	
	printf("Enter size of array := ");
	scanf("%d",&x);
	
	int i,a[x];
	
	printf("\nEnter array element :\n");
	
	for(i=0; i<x; i++)
	{
		printf("a[%d] : ",i);
		scanf("%d",&a[i]);
	}

	int b[x],j;
	
	for(i=0;i<x;i++)
    {
		if (a[i]%2!=0)
		{
			b[j]=a[i];
			j++;
		}
	}
	
	printf("\nThe Odd elements are : ");
    
	for(i=0;i<j;i++)
    {
		printf("%d ",b[i]);
    }
		
}