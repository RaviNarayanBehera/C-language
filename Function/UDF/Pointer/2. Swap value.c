#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	
	printf("Enter the value of a : ");
	scanf("%d",&a);
	
	printf("Enter the value of b : ");
	scanf("%d",&b);
	
	printf("\nBefore Swapping : ");
	printf("\na = %d",a);
	printf("\nb = %d",b);

	int c;
	
	c = a;
	a = b;
	b = c;
	
	printf("\n\nAfter Swapping : ");
	printf("\na = %d",a);
	printf("\nb = %d",b);
}