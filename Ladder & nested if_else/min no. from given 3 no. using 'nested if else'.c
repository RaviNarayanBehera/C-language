#include<stdio.h>
#include<conio.h>
main()
{
	printf("Find min no. from given 3 no. 'using nested if else'");
	
	int a,b,c;
	
	printf("\n\n\nEnter First no. :=");
	scanf("%d",&a);
	
	printf("Enter Second no. :=");
	scanf("%d",&b);
	
	printf("Enter Third no. :=");
	scanf("%d",&c);
	
	if(a<b)
	{
		printf("'%d' is min no.",a);	
	}
	else
	{
		if(b<c)
		{
			printf("'%d' is min no.",b);
		}
		else
		{
			printf("'%d' is min no.",c);
		}
	}
}