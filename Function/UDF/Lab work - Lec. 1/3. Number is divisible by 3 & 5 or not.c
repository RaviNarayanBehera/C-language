#include<stdio.h>
#include<conio.h>

void divide()
{
	int a;
	
	printf("Enter no. := ");
	scanf("%d",&a);
	
	if(a%3==0 && a%5==0)
	{
		printf("\nThe given number is divisible by both 3 & 5");
	}
	else if(a%5==0)
	{
		printf("\nThe given number is divisible by 5");
	}
	else if(a%3==0)
	{
		printf("\nThe given number is divisible by 3");
	}
	else
	{
		printf("\nThe given number is not divisible both 3 & 5");
	}
}

main()
{
	divide();
}