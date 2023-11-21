#include<stdio.h>
#include<conio.h>
main()
{
	int x=1,y,sum=1;
	
	printf("Enter any no.:= ");
	scanf("%d",&y);
	
	do
	{
		printf(" %d ",x);
		sum*=x;
		x++;
	}while(x<=y);
	printf(" = '%d'",sum);
}