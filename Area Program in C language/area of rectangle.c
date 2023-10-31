#include<stdio.h>
#include<conio.h>
main()
{
	printf("3.Find area of rectangle.");
	
	int l,w;
	
	printf("\n\n Enter the value of length :=");
	scanf("%d" ,&l);
	
	printf("\n Enter the value of width :=");
	scanf("%d",&w);
	
	int area;
	area = l*w;//area of rectangle = length*width;
	
	printf("\nArea of rectangle is %dsq unit.",area);
}