#include<stdio.h>
#include<conio.h>
main()
{
	int x,y=1;
	
	printf("Enter no.:= ");
	scanf("%d",&x);
	
	do
	{
		printf(" %d ",x);
		x--;
	}while(x>=y);
}