#include<stdio.h>
#include<conio.h>
main()
{
	int x=1 , y;
	
	printf("Enter no.:= ");
	scanf("%d",&y);
	
	do
	{
		printf(" %d ",x);
		x+=2;
	}while(x<=y);
}