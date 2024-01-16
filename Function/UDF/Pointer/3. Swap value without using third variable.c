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

	a = a + b;
	b = a - b;
	a = a - b;
	
	printf("\n\nAfter Swapping : ");
	printf("\na = %d",a);
	printf("\nb = %d",b);
}