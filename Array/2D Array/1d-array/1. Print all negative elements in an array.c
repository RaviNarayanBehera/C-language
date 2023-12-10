#include<stdio.h>
#include<conio.h>
main()
{
	int b;
	
	printf("Enter no.:= ");
	scanf("%d",&b);
	
	int i,a[b];
	
	printf("\nArray element :\n");
	for(i=0; i<b; i++)
	{
		printf("a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n");
	
	for(i=0; i<b; i++)
	{
		if(a[i]<0)
		{
			printf("%d ",a[i]);
		}
	}
}