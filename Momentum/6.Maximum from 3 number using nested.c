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
	
	if(a>b)
	{
		if(a>c)
		{
			printf("'%d' is Maximum number.",a);
		}
		else
		{
			printf("'%d' is Maximum number.",c);
		}
	}
	else
	{
		if(b>c)
		{
			printf("'%d' is Maximum number.",b);
		}
		else
		{
			printf("'%d' is Maximum number.",c);
		}
	}
}