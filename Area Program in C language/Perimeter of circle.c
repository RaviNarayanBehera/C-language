#include<stdio.h>
#include<conio.h>
main()
{
	printf("6.Perimeter of circle.");
	
	int r;
	const float pi=3.14;
	
	printf("\n \nEnter the value of radius := ");
	scanf("%d",&r);
	
	float C;
	
	C = 2*pi*r; //Perimeter/Circumference = 2*pi*radius;
	printf("\nPerimeter of circle := %0.2f",C);
	
}