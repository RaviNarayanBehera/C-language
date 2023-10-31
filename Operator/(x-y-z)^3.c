#include<stdio.h>
#include<conio.h>
main()
{
	printf("Formula (x-y-z)^3");
	
	int x,y,z;
	
	printf("\n\nEnter the value of x := ");
	scanf("%d",&x);
	
	printf("Enter the value of y := ");
	scanf("%d",&y);
	
	printf("Enter the value of z := ");
	scanf("%d",&z);
	
	
	int ans;
	// (x-y-z)^3 = x^3 - y^3 - z^3 -3*x^2*y + 3*x*y^2 - 3*y*z^2 - 3*x^2*z + 3*x*z^2 + 6*x*y*z ;
	ans = x*x*x - y*y*y - z*z*z - 3*x*x*y + 3*x*y*y - 3*y*z*z - 3*x*x*z + 3*x*z*z + 6*x*y*z ;
	
	printf("\nAnswer of (x-y-z)^3 is %d.",ans);

}