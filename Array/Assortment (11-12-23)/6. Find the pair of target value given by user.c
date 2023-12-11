#include<stdio.h>
#include<conio.h>
main()
{
	int x;
	
	printf("Enter size of array : ");
	scanf("%d",&x);
	
	int i,j,a[x];
	
	printf("\nEnter element of array :\n");
	
	for(i=0; i<x; i++)
	{
		printf("a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	int u;
	
	printf("\n\nEnter the target number : ");
	scanf("%d",&u);
	
	for(i=0; i<x; i++)
	{
		for(j=i+1; j<x; j++)
		{
			if(a[i]+a[j]==u)
			{
				printf("{%d , %d}\n",a[i],a[j]);
			}
		}
	}
}