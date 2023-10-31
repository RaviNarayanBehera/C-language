#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	printf("Enter no.1 :=");
	scanf("%d",&a);
	
	printf("Enter no.2 :=");
	scanf("%d",&b);
	
/*	c = a;
	a = b;
	b = c;*/
	a = b;
	b = a;
	
	printf("Swapping value of 1 := %d",a);
	printf("\nSwapping value of 2 := %d",b);
/*

	int a,b,c;
	
	printf("Enter no.1 :=");
	scanf("%d",&a);
	printf("Enter no.2 :=");
	scanf("%d",&b);
		
		c=a;
		a=b;
		b=c;
		
	printf("Swapping value of a := %d",a);
	printf("\nSwapping value of b := %d",b);      */
	
}