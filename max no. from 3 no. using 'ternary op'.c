#include<stdio.h>
#include<conio.h>
main()
{
	printf("Find max no. from using 'ternary op.'");
	
	int a,b,c;
	
	printf("\n\nEnter first no. := ");
	scanf("%d",&a);
	
	printf("Enter second no. := ");
	scanf("%d",&b);
	
	printf("Enter third no. := ");
	scanf("%d",&c);

(a>b && a>c) ? printf("\n\n'%d' is max no.",a) : (b>c)?printf("\n\n'%d' is max no.",b):printf("\n\n'%d' is max no.",c);


	
}