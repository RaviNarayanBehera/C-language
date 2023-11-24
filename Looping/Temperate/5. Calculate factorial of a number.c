#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,sum=1;
	
	printf("Enter no.:= ");
	scanf("%d",&a);
	
	for(b=1; b<=a; b++)
	{
		printf("%d ",b);
		sum*=b;
	}	
	printf("= '%d'",sum);
}