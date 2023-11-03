#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	
	printf("Enter the number := ");
	scanf("%d",&a);
	
	if(a==0)
	{
		printf("It is a 'Neutral' number.");
	}
	else
	{
		if(a>=1)
		{
			printf("\nIt is Non-Neutral and Positive number.");
		}
		else
		{
			printf("\nIt is Non-Neutral and Negative number.");
		}
	}
}