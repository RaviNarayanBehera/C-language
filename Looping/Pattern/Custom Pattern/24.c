#include<stdio.h>
#include<conio.h>
main()
{
	int i,j;
	
	for(i=1; i<=7; i++)
	{
		for(j=1; j<=5; j++)
		{
			if((i==1 && j!=1) || (i==2 && j==1) || (i==3 && j==1) || (i==4 && j!=1 && j!=5) || (i==5 && j==5) || (i==6 && j==5) || (i==7 && j!=5))
			{
				printf("*");	
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}