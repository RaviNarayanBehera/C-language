#include<stdio.h>
#include<conio.h>
main()
{
	int x=1 , y;
	
	printf("Enter any no.:= ");
	scanf("%d",&y);
	
	do
	{
		printf("%d ",x);
		x++;
	}while(x<=y);
}