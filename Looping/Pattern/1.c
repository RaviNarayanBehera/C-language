#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,k;
	

	for(i=1; i<=5; i++)
	{
		for(k=4; k>=i; k--)
		{
			printf(" ");
		}
		for(j=1; j<=i-1; j++)
		{
			printf("%d",j);
		}

		for(j=i; j>=1; j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	
	for(i=4; i>=1; i--)
	{
		for(k=5; k>i; k--)
		{
			printf(" ");
		}
		for(j=1; j<=i; j++)
		{
			printf("%d",j);
		}
		for(j=i-1; j>=1; j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	
	
}