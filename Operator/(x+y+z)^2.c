#include<stdio.h>
#include<conio.h>
main()
{
	printf("Formula (x+y+z)^2");
	
	int x,y,z;
	
	printf("\n\nEnter the value of x := ");
	scanf("%d",&x);
	
	printf("Enter the value of y := ");
	scanf("%d",&y);
	
	printf("Enter the value of z := ");
	scanf("%d",&z);
	
	int ans;
	// (x+y+z)^2 = x^2 + y^2 + z^2 + 2*x*y + 2*y*z + 2*z*x ;
	ans = x*x + y*y + z*z + 2*x*y + 2*y*z + 2*z*x ;
	
	printf("\nAnswer of (x+y+z)^2 is %d.",ans);
}