#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d;
	
	printf("Enter no.:= ");
	scanf("%d",&a);

	printf("Enter no.:= ");
	scanf("%d",&b);
	
	printf("Enter no.:= ");
	scanf("%d",&c);
	
	printf("Enter no.:= ");
	scanf("%d",&d);
	
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				printf("\n\n'%d' is Maximum number.",a);
			}
			else
			{
				printf("\n\n'%d' is Maximum number.",d);
			}
		}
		else
		{
			if(c>d)
			{
				printf("\n\n'%d' is Maximum number.",c);
			}
			else
			{
				printf("\n\n'%d' is Maximum number.",d);
			}
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				printf("\n\n'%d' is Maximum number.",b);
			}
			else
			{
				printf("\n\n'%d' is Maximum number.",d);
			}
		}
		else
		{
			if(c>d)
			{
				printf("\n\n'%d' is Maximum number.",c);
			}
			else
			{
				printf("\n\n'%d' is Maximum number.",d);
			}
		}
	}
}