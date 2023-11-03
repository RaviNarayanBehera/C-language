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
		printf("%d is minimum number.",b);
	}
	else
	{
		printf("%d is minimum number.",a);
	}
}