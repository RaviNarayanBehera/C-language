#include<stdio.h>
#include<conio.h>
main()
{
	int day;
	
	printf("Enter day of week := ");
	scanf("%d",&day);
	
	if(day==1)
	{
		printf("\n'Monday'");
	}
	else if(day==2)
	{
		printf("\n'Tuesday'");
	}
	else if(day==3)
	{
		printf("\n'Wednesday'");
	
	}
	else if(day==4)
	{
		printf("\n'Thursday'");
	}
	else if(day==5)
	{
		printf("\n'Friday'");
	}
	else if(day==6)
	{
		printf("\n'Saturday'");
	}
	else if(day==7)
	{
		printf("\n'Sunday'");
	}
	else
	{
		printf("\n'Please enter valid no...!'");
	}
}	