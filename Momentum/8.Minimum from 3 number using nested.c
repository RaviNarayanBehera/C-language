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
	
	if(a<b)
	{
		if(a<c)
		{
			printf("\n'%d' is Minimum number.",a);
		}
		else
		{
			printf("\n'%d' is Minimum number.",b);
		}
	}
	else
	{
		if(b<c)
		{
			printf("\n'%d' is Minimum number.",b);
		}
		else
		{
			printf("\n'%d' is Minimum number.",c);
		}
	}
}