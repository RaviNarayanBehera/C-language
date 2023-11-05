#include<stdio.h>
#include<conio.h>
main()
{
	printf("Swaping value program.");
	
	int a,b;
	
	printf("\n\nEnter no.1 := ");
	scanf("%d",&a);
	
	printf("Enter no.2 := ");
	scanf("%d",&b);
	
	/*
		1. condition (a->b) (b<-a) with + and - using ;
	
		a = a+b;
		b = a-b;
		a = a-b;
	*/
	
	//  2. condition (a->b) (b<-a) with * and / using ;
	
		a = a*b;
		b = a/b;
		a = a/b;
	
	
	printf("\n\nSwaping value  := %d",a);
	printf("\nSwaping value  := %d",b);
}