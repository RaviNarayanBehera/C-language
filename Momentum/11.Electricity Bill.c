#include<stdio.h>
#include<conio.h>
main()
{
	int unit,total;
	int const rent=3000;
	
	printf("Enter unit := ");
	scanf("%d",&unit);
	
	
	if(unit<=120)
	{
		total=rent+(unit*8);
		printf("\nTotal bill = %d",total);
	}
	else
	{
		if(unit<=250)
		{
			total=rent+(unit*10);
			printf("\nTotal bill = %d",total);
		}
		else
		{
			total=rent+(unit*13);
			printf("Total bill = %d",total);
		}
	}
}