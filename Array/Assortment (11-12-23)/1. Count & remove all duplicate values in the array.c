#include<stdio.h>
#include<conio.h>
main()
{
	int x;
	printf("Enter size of array : ");
	scanf("%d",&x);
	
	int a[x];
	printf("\nEnter element of array : \n");
	
	int i;
	for(i=0; i<x; i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	printf("The input elements are : ");
	
	for(i=0; i<x; i++)
	{
		printf("%d ",a[i]);
	}
	int j,f=1;
		printf("\nNo. of times array elements repeats : ");
	for(i=0; i<x; i++)
	{
		for(j=i+1; j<x; j++)
		{
			if(a[i]==a[j])
			{
				f++;
				a[j]=0;
			}
		}
		if(a[i]!=0)
		{
			printf("\n%d --> %d times",a[i],f);
		}
		
		f=1;
	}
	printf("\nAfter removed duplicate array the array is ");
	for(i=0; i<x; i++)
	{
		for(j=i+1; j<x; j++)
		{
			if(a[i]==a[j])
			{
				f++;
				a[j]=0;
			}
		}
		if(a[i]!=0)
		{
			printf("%d ",a[i]);
		}
		
		f=1;
	}

}