#include<stdio.h>
#include<conio.h>
main()
{
	printf("Find max. from the given 4 no. using 'nested if else'");
	
	int a,b,c,d;
	
	printf("\n\nEnter First no. := ");
	scanf("%d",&a);
	
	printf("Enter Second no. := ");
	scanf("%d",&b);
	
	printf("Enter Third no. := ");
	scanf("%d",&c);
	
	printf("Enter Fourth no. := ");
	scanf("%d",&d);
	
	if(a>b)
	{
		//b,c,d
		if(a>c)
		{
			//c,d
			if(a>d)
			{
				//a&d
				printf("\n\n'%d' is max no.",a);	
			}
			else
			{
				printf("\n\n'%d' is max no.",d);
			}
		}
		else
		{
			if(c>d)
			{
				printf("\n\n'%d' is max no.",c);
			}
			else
			{
				printf("\n\n'%d' is max no.",d);
			}
		}
	}
	else
	{
		if(b>c)
		{
			//c,d
			if(b>d)
			{
				//b&d
				printf("\n\n'%d' is max no.",b);
			}
			else
			{
				printf("\n\n'%d' is max no.",d);
			}
		}
		else
		{
			if(c>d)
			{
				printf("\n\n'%d' is max no.",c);
			}
			else
			{
				printf("\n\n'%d' is max no.",d);
			}
		}
	}
}