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
	
	int j,check=1;
		printf("\nThe frequency of each element of array are : ");

	for(i=0; i<x; i++)
	{
		for(j=i+1; j<x; j++)
		{
			if(a[i]==a[j])
			{
				check++;
				a[j]=0;
			}
		}
		if(a[i]!=0)
		{
			printf("\n%d --> %d",a[i],check);
		}
		
		check=1;
	}

}