#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,k;
	
	for(i=1; i<=5; i++)
	{
		for(k=2; k<=i; k++)
		{
			printf(" ");
		}
		for(j=i; j<=5; j++)
		{
			if(j%2==0)
			{
				printf("0");
			}
			else
			{
				printf("1");
			}	
		}
		printf("\n");
	}
}