#include<stdio.h>
#include<conio.h>
main()
{
	printf("Formula (x+y)^3");
	
	int x,y;
	
	printf("\n\nEnter the value of x := ");
	scanf("%d",&x);

	printf("Enter the value of y := ");
	scanf("%d",&y);
	
	int ans;
	
	ans = x*x*x + 3*x*x*y + 3*x*y*y + y*y*y ; //(x+y)^3 = x^3 + 3*x^2*y + 3*x*y^2 + y^3 ;
	
	printf("\nAnswer of (x+y)^3 is %d.",ans);
	
}