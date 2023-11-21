#include<stdio.h>
#include<conio.h>
main()
{
	int x,y=1,sum=0;
	
	printf("Enter no.:= ");
	scanf("%d",&x);
	
	do
	{
		printf(" %d ",y);
		sum+=y;
		y++;
	}while(y<=x);
	printf(" = '%d'",sum);
}