#include<stdio.h>
#include<conio.h>
main()
{
	printf("Formula (x+y)^2");
	int x,y;
	
	printf("\n\nEnter the value of x := ");
	scanf("%d",&x);
	
	printf("Enter the valur of y := ");
	scanf("%d",&y);
	
	int ans;
	
	ans = x*x+y*y+2*x*y; // (x+y)^2 = x^2 + 2*x*y + y^2 ;
	
	printf("\nAnswer of (x+y)^2 is %d.",ans);
}