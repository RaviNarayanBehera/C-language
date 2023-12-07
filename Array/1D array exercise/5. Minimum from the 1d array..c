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
