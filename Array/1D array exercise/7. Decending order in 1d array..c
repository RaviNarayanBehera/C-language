#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	
	printf("Enter size of array := ");
	scanf("%d",&a);
	
	int x[a],i;
	
	printf("Enter array element : \n");
	
	for(i=0; i<a; i++)
	{
		printf("a[%d] : ",i);
		scanf("%d",&x[i]);
	}
	
	int j,temp;
	
	for(i=0; i<a; i++)
	{
		for(j=i+1; j<a; j++)
		{
			if(x[i]<x[j])
			{
				temp=x[i];
				x[i]=x[j];
				x[j]=temp;
			}
		}
	}
	printf("\nDecending Order : ");
	
	for(i=0; i<a; i++)
	{
		printf("%d ",x[i]);
	}
}
