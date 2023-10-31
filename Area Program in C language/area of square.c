#include<stdio.h>
#include<conio.h>
main()
{
	printf("2.Find area of square.");
	
	int a;
	
	printf("\n\nEnter the value of side :=");
	scanf("%d",&a);
	
	int area; 
	area = a*a; // area of square = side*side;
	printf("\nThe area of square is %dsq unit.",area);
}