#include<stdio.h>
#include<conio.h>
main()
{
	int a=1,odd;
	
	printf("Enter no.:= ");
	scanf("%d",&odd);
	
	while(a<=odd)		
	{
		printf("%d ",a);
		a+=2;
	}
}