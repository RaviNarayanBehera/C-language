#include<stdio.h>
#include<conio.h>
main()
{
	int i,j;
	
	for(i=1; i<=7; i++)
	{
		for(j=1; j<=5; j++)
		{
			if((i==1 && j!=2 && j!=3 && j!=4) || (i==2 && j!=2 && j!=3 && j!=4) || (i==3 && j!=1 && j!=3 && j!=5) || (i==4 && j==3) || (i==5 && j==3) || (i==6 && j==3) || (i==7 && j==3))
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