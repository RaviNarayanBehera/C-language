#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	
	printf("Enter no := ");
	scanf("%d",&a);
	
	(a==0)?printf("'%d' is Neutral number",a):(a%2==0)?printf("'%d' is Even number.",a):printf("'%d' is Odd number.",a);
}