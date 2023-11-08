#include<stdio.h>
#include<conio.h>
main()
{
	printf("Find min. from the given 5 no. using 'nested if else'");
	
	int a,b,c,d,e;
	
	printf("\n\nEnter first no. := ");
	scanf("%d",&a);
	
	printf("Enter second no. := ");
	scanf("%d",&b);
	
	printf("Enter third no. := ");
	scanf("%d",&c);
	
	printf("Enter forth no. := ");
	scanf("%d",&d);
	
	printf("Enter fifth no. := ");
	scanf("%d",&e);
	
	if(a<b)
	{
		
		if(a<c)
		{
			if(a<d)
			{
				if(a<e)
				{
					printf("'%d' is min no.",a);
				}
				else
				{
					printf("'%d' is min no.",e);
				}
			}
			else
			{
				if(d<e)
				{
					printf("'%d' is min no.",d);
				}
				else
				{
					printf("'%d' is min no.",e);
				}
			}
		}
		else
		{
			if(c<d)
			{
				if(c<e)
				{
					printf("'%d' is min no.",c);
				}
				else
				{
					printf("'%d' is min no.",e);
				}
			}
			else
			{
				if(d<e)
				{
					printf("'%d' is min no.",d);
				}
				else
				{
					printf("'%d' is min no.",e);
				}
			}
		}
		
	}
	else
	{
		if(b<c)
		{
			if(b<d)
			{
				if(b<e)
				{
					printf("'%d' is min no.",b);
				}
				else
				{
					printf("'%d' is min no.",e);
				}
			}
			else
			{
				if(d<e)
				{
					printf("'%d' is min no.",d);
				}
				else
				{
					printf("'%d' is min no.",e);
				}
			}
		}
		else
		{
			if(c<d)
			{
				if(c<e)
				{
					printf("'%d' is min no.",c);
				}
				else
				{
					printf("'%d' is min no.",e);
				}
			}
			else
			{
				if(d<e)
				{
					printf("'%d' is min no.",d);
				}
				else
				{
					printf("'%d' is min no.",e);
				}
			}
		}
	}
	
}