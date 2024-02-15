#include<stdio.h>
#include<conio.h>
main()
{
	int month;
	
	printf("Enter the no. of month := ");
	scanf("%d",&month);
	
	switch(month)
	{
		case 1 : printf("\n\nJanuary - '31 days'.");
		break;
		case 2 : printf("\n\nFebruary - '28/29 days'.");
		break;
		case 3 : printf("\n\nMarch - '31 days'.");
		break;
		case 4 : printf("\n\nApril - '30 days'.");
		break;
		case 5 : printf("\n\nMay - '31 days'.");
		break;
		case 6 : printf("\n\nJune - '30 days'.");
		break;
		case 7 : printf("\n\nJuly - '31 days'.");
		break;
		case 8 : printf("\n\nAugust - '31 days'.");
		break;
		case 9 : printf("\n\nSeptember - '30 days'.");
		break;
		case 10 : printf("\n\nOctober - '31 days'.");
		break;
		case 11 : printf("\n\nNovember - '30 days'.");
		break;
		case 12 : printf("\n\nDecember - '31 days'.");
		break;
		
		default : printf("\n\nPlss....Enter valid input....!");
		 
	}
}