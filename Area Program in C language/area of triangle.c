#include<stdio.h>
#include<conio.h>
main()
{
	printf("4.Find the area of triangle.");
	
	int b,h;
	
	printf("\n\nEnter the value of height :=");
	scanf("%d",&h);
	printf("\nEnter the value of base :=");
	scanf("%d",&b);
	
	int area;
	
	area = b*h/2;
	
	printf("\nArea of triangle is %d.",area);
}