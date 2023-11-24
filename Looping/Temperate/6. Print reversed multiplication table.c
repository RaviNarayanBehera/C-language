#include<stdio.h>
#include<conio.h>
main()
{
	int a,b=10;
	
	printf("Enter no.:= ");
	scanf("%d",&a);
	
	while(b>=1)
	{
		printf("\n%d * %d = %d",a,b,a*b);
		b--;
	}
}