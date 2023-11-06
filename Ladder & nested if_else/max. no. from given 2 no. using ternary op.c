#include<stdio.h>
#include<conio.h>
main()
{
	printf("Find max. no. from given 2 no. using ternary op.");
	
	int a,b;
	
	printf("\n\n\nEnter no.a := ");
	scanf("%d",&a);
	
	printf("Enter no.b := ");
	scanf("%d",&b);
	
	(a>b)?printf("'a' has the max no. from the given no."):printf("'b' has the max no. from the given no.");
		
}