#include<stdio.h>
#include<conio.h>
main()
{
	char day;
	printf("Please enter \n'M' for Monday \n'T' for Tuesday \n'W for Wednesday \n'H' for Thrusday \n'F' for Friday \n'S' for Saturday \n'U' for Sunday");
	printf("\n\nEnter letter of week days in capital letter. := ");
	scanf("%c",&day);
	
	switch(day)
	{
		case 'M' : printf("'Monday'");
		break;
		case 'T' : printf("'Tuesday'");
		break;
		case 'W' : printf("'Wednesday'");
		break;
		case 'H' : printf("'Thursday'");
		break;
		case 'F' : printf("'Friday'");
		break;
		case 'S' : printf("'Saturday'");
		break;
		case 'U' : printf("'Sunday'");
		break;
		
		default : printf("Please enter valid letter of week days...!");
		break;
	}
	
}