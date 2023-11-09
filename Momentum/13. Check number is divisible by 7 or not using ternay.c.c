#include<stdio.h>
#include<conio.h>
main()
{
	int no;
	
	printf("Enter any number := ");
	scanf("%d",&no);
	
	(no%7==0)?printf("Divisible",no):printf("Not Divisible",no);
}