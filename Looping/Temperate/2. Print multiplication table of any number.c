#include<stdio.h>
#include<conio.h>
main()
{
	int a,b=1;
	
	printf("Enter any no.:= ");
	scanf("%d",&a);
	
	do
	{
		printf("\n%d * %d = %d",a,b,a*b);
		b++;
	}while(b<=10);
}