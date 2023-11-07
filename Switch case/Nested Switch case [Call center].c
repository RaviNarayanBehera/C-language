#include<stdio.h>
#include<conio.h>
main()
{
	int choice;
	int no;
	printf("Welcome to the 'Jio Care Center'.");
	printf("\n\nHow can i help you sir/mam ?");
	printf("\n\nPress 1. For Ongoing recharge details.");
	printf("\nPress 2. For recharge plans.");
	printf("\nPress 3. For Jio Tunes.");
	printf("\nPress 4. For Another issue.");
	
	printf("\n\nSelect your problem.:= ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		
		case 1 : printf(" Active Plan : Rs. 666-3m-1.5GB/D \n Voice Call Benefits : Unlimited within India  \n Available SMS Balance : 100 SMS/100 SMS \n Available Data Balance : 550.60MB/1.5GB");
		break;
		case 2 : printf("Popular plans :\n 1. Rs. 666-84D-1.5GB/D  \n 2. Rs. 749-90D-2GB/D  \n 3. Rs. 1099-84D-2GB/D  \n 4. Rs. 3662-365D-2GB/D");
		break;
		case 3 : printf("\nSelect Caller Jio tune from given songs.");
				 printf("\n\nPress 1. Ram Siya Ram");
				 printf("\nPress 2. Meri Maa ke Barabar koi nahi...");
				 printf("\nPress 3. Mangal Bhavan Amangal Hari...");
				 printf("\nPress 4. Namo Namo");
				 printf("\nPress 5. For more songs");
				 printf("\n\nEnter the no. of caller jio tune.:= ");
				 scanf("\n%d",&no);
				 
				 switch(no)
				 {
				 	case 1 : printf("\nYou Have selected 'Ram Siya Ram' song as caller jio tune. Your caller jio tune is successfully activated.");
				 	break;
				 	case 2 : printf("\nYou Have selected 'Meri Maa ke Barabar koi nahi...' song as caller jio tune. Your caller jio tune is successfully activated.");
				 	break;
					case 3 : printf("\nYou Have selected 'Mangal Bhavan Amangal Hari...' song as caller jio tune. Your caller jio tune is successfully activated.");
				 	break;
				 	case 4 : printf("\nYou Have selected 'Namo Namo' song as caller jio tune. Your caller jio tune is successfully activated.");
				 	break;
				 	case 5 : printf("\nDownload Jio Saavn App for more songs.");
				 	break;
				 	default : printf("Please enter valid input...!"); 
				 	
			     }
		break;
		case 4 : printf("\nWait... connecting to jio call center. Please wait... we will connect you shortly.");
		break;
		default : printf("Please enter valid input...!");  
	}	
}