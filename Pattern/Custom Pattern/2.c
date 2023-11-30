#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,k;
	int p,q;
	
	for(i=1; i<=4; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}	
	for(p=5; p>=1; p--)
	{
		for(q=1; q<=p; q++)
		{
			printf("%d ",q);
		}
		printf("\n");
	}
	
}