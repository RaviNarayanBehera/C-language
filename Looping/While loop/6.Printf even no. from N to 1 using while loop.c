#include<stdio.h>
#include<conio.h>
main()
{
	int a=1,even;
	
	printf("Enter no.:= ");
	scanf("%d",&even);
	
	while(even>=a)
	{	
		printf("%d ",even);
		even-=2;
	}
}

