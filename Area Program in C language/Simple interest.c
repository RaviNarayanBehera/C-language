#include<stdio.h>
#include<conio.h>
main()
{
	printf("5.Find Simple Interest.");
	
	float p,i,t;
	
	printf("\nEnter the Principal Amount :=");
	scanf("%f",&p);

	printf("\nEnter the Time period :=");
	scanf("%f",&t);
	
	printf("\nEnter the Interest :=");
	scanf("%f",&i);
	
	float si;
	si = p*i*t/100; //Simple Interest = (amount*interest*time)/100;
	
	printf("\nSimple Interest := %0.2f",si);     
	
	
}