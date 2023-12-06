#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	
	printf("Enter size of array : ");
	scanf("%d",&a);
	
	int i,m[a];
	
	for(i=0; i<a; i++)
	{
		printf("a[%d] : ",i);
		scanf("%d",&m[i]);
	}
	
	int min=m[0];
	
	for(i=1; i<a; i++)
	{
		if(m[i]<min)
		{
			min=m[i];
		}
	}
	printf("\nMinimum number : %d",min);
}







/*
#include<stdio.h>
main()
{
	int n;
	printf("enter n:");
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0; i<=n; i++)
	{
		
		printf("enter a[%d]",i);
		scanf("%d",&a[i]);
	}
	int min=0;
	for(i=0; i<=n; i++)
	{
	if(a[i<min])
	{
	   	min=a[i];
	}
   }
	printf("%d",min);
}*/