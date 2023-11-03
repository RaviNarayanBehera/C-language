#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	
	printf("Enter no := ");
	scanf("%d",&a);
	
	printf("Enter no. := ");
	scanf("%d",&b);
	
	if(a>b)
	{
		printf("'%d' is minimum number from the given value.",b);
	}
	else
	{
		printf("'%d' is minimum number from the given value.",a);
	}
}