#include<stdio.h>
#include<conio.h>
main()
{
	printf("1.Find area of circle :");
	// Find area of circle;
	int r; // radius;
	const float pi=3.14; 
	
	printf("\n\nEnter the value of radius :=");
	scanf("%d",&r);
	
	// area of circle = pi * r * r;

	float a;
	a = pi*r*r;
	printf("\nArea of circle is %0.2fcm2",a);
}