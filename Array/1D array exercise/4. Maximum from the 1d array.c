#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	
	printf("Enter size of array := ");
	scanf("%d",&a);
	
	int i,x[a];
	
	for(i=0; i<a; i++)
	{
		printf("a[%d] : ",i);
		scanf("%d",&x[i]);
	}
	
	int max=0;
	
	for(i=0; i<a; i++)
	{
		if(x[i]>max)
		{
			max=x[i];
		}
	}
	
	printf("\nMaximum Number is : %d",max);
	
}