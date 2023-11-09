#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	
	printf("Enter no.:= ");
	scanf("%d",&a);
	
	printf("Enter no.:= ");
	scanf("%d",&b);
	
	printf("Enter no.:= ");
	scanf("%d",&c);
	
	if(a>b && a>c)
	{
		printf("\n'%d' is maximum number.",a);
	}
	else if(b>c && b>a)
	{
		printf("\n'%d' is maximum number.",b);
	}
	else
	{
		printf("\n'%d' is maximum number.",c);
	}
}