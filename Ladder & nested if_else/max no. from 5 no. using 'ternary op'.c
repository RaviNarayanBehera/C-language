#include<stdio.h>
#include<conio.h>
main()
{
	printf("Max no. from 5 no. using 'ternary op.'");
	
	int a,b,c,d,e;
	
	printf("\n\n\nEnter first no. := ");
	scanf("%d",&a);
		
	printf("Enter second no. := ");
	scanf("%d",&b);
		
	printf("Enter third no. := ");
	scanf("%d",&c);
		
	printf("Enter fourth no. := ");
	scanf("%d",&d);
	
	printf("Enter fifth no. := ");
	scanf("%d",&e);
	
	(a>b && a>c && a>d && a>e)?printf("\n\n'%d' is max no.",a):(b>c && b>d && b>e)?printf("\n\n'%d' is max no.",b):(c>d && c>e)?printf("\n\n'%d' ic max no.",c):(d>e)?printf("\n\n'%d' is max no.",d):printf("\n\n'%d' is max no.",e);
}
