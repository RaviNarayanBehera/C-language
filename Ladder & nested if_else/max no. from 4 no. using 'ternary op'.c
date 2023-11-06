#include<stdio.h>
#include<conio.h>
main()
{
	printf("Max no. from 4 no. using 'ternary op.'");
	
	int a,b,c,d;
	
	printf("\n\n\nEnter first no. := ");
	scanf("%d",&a);
		
	printf("Enter second no. := ");
	scanf("%d",&b);
		
	printf("Enter third no. := ");
	scanf("%d",&c);
		
	printf("Enter fourth no. := ");
	scanf("%d",&d);
	
	(a>b && a>c && a>d)?printf("\n\n'%d' is max no.",a):(b>c && b>d)?printf("\n\n'%d' is max no.",b):(c>d)?printf("\n\n'%d' ic max no.",c):printf("\n\n'%d' is max no.",d);
}