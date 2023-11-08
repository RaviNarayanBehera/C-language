#include<stdio.h>
#include<conio.h>
main()
{
	char input;
	
	
	printf("Enter any thing := ");
	scanf("%c",&input);
	
	if((input>= 'a' && input<= 'z')||(input>= 'A' && input<= 'Z'))
	{
		printf("'%c' is Alphabet.",input);
	}
	else if(input >= '0' && input <= '9')
	{
		printf("'%c' is Digit.",input);
	}
	else
	{
		printf("'%c' is Special Character.",input);
	}
	

}