#include<stdio.h>
#include<conio.h>
main()
{
	int x=1,y;
	
	printf("Enter no.:= ");
	scanf("%d",&y);
	
	do
	{
		printf("\n%d * %d = %d",y,x,x*y);
		x++;
	}while(x<=10);
}