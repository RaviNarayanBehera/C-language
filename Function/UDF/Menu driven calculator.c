#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,op;
	
	start :
		
	printf("\nPress 1 for '+'\n");
	printf("Press 2 for '-'\n");
	printf("Press 3 for '*'\n");
	printf("Press 4 for '/'\n");
	printf("Press 5 for '%%'\n");
	printf("Press 0 for the exit\n");
	printf("\nEnter your choice : ");
	scanf("%d",&op);

//	Taking value from user....
	
	if(op==1 || op==2 || op==3 || op==4 || op==5)
	{
		printf("Enter no.1 := ");
		scanf("%d",&a);
	
		printf("Enter no.2 := ");
		scanf("%d",&b);
	}

//	Switch case start....
	
	switch(op)
	{
		case 1 : 
			printf("\nAnswer : Addition of %d and %d is %d.\n",a,b,a+b);
			goto  start ;
		break;
		
		case 2  : 
			printf("\nAnswer : Substraction of %d and %d is %d.\n",a,b,a-b);
			goto  start ;
		break;
		
		case 3  : 
			printf("\nAnswer : Multiplication of %d and %d is %d.\n",a,b,a*b);
			goto  start ;
		break;
		
		case 4 : 
			printf("\nAnswer : Division of %d and %d is %d.\n",a,b,a/b);
			goto  start ;
		break;
		
		case 5 : 
			printf("\nAnswer : Percentage of %d and %d is %d.\n",a,b,a%b);
			goto  start ;
		break;
		
		case 0 : 
			printf("\nCode is Stop..");
		break;
		
	
		default :
			printf("\nPlease enter valid Operator....!!\n");
		break;		
	}


}