#include<stdio.h>
#include<conio.h>
main()
{
	float fah,cel;		// fah = Fahrenheit , cel = Celcius ;
	
	printf("Enter the Degree of Celcius := ");
	scanf("%f",&cel);
	
	fah = (9.5*cel)+32;				// this formula use according to given questions formula ; 
	
	//fah = ((cel*9)/5)+32;  //original formula; 
	
	printf("\n Temperature in Fahrenheit is %0.2f",fah);
	
}