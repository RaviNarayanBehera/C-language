#include<stdio.h>
#include<conio.h>
main()
{
	int i,j;
	
	for(i=1; i<=7; i++)
	{
		for(j=1; j<=7; j++)
		{
			if((i==4 && j==4) || (i==3 && j!=1 && j!=2 && j!=4 && j!=6 && j!=7) || (i==5 && j!=1 && j!=2 && j!=4 && j!=6 && j!=7) || (i==2 && j!=1 && j!=3 && j!=4 && j!=5 && j!=7) || (i==6 && j!=1 && j!=3 && j!=4 && j!=5 && j!=7) || (i==1 && j!=2 && j!=3 && j!=4 && j!=5 && j!=6) || (i==7 && j!=2 && j!=3 && j!=4 && j!=5 && j!=6))
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