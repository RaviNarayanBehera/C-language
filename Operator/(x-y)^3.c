#include<stdio.h>
#include<conio.h>
main()
{
	printf("Formula (x-y)^3");
	
	int x,y;
	
	printf("\n\nEnter the value of x := ");
	scanf("%d",&x);
	
	printf("Enter the value of y := ");
	scanf("%d",&y);
	
	int ans;
	
	ans = x*x*x - y*y*y - 3*x*x*y + 3*x*y*y ; //  (x-y)^3 = x^3 - y^3 - 3x^2y + 3xy^2 ;

	printf("\nAnswer of (x-y)^3 is %d.",ans);
}