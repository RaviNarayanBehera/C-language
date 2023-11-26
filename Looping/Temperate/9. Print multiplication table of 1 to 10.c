#include<stdio.h>
#include<conio.h>
main()
{
	int i,j;
	
	
	for(j=1; j<=10; j++)
	{
		for(i=1; i<=10; i++)
		{
			printf("\n%d * %d = %d",j,i,j*i);
		}
		printf("\n");
	}
}