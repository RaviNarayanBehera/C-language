#include<stdio.h>
#include<conio.h>
main()
{
	int age;
	
	printf("Enter your age := ");
	scanf("%d",&age);

	if(age<=100 && age>=1)
	{
		if(age>=18)
		{
			printf("\nYou are eligible to vote.",age);
		}
		else
		{
			printf("\nYou are not eligible to vote.",age);
		}	
	}
	else
	{
		if(age>=1 && age<=100)
		{
			printf("\nYou are not eligible to vote.",age);
		}
		else
		{
			printf("\nPlease enter valid age.",age);
		}	
	}
		
}