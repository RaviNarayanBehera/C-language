#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,i;
	
	printf("Enter first number := ");
	scanf("%d",&a);
	
	printf("Enter second number := ");
	scanf("%d",&b);
	
	printf("\nThe array is : ");
	
	for(i=a; i<=b; i++)
	{
		if(i%4==0)
		{
			printf("%d ",i);	
		}
	}
}



