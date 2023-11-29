#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,k;
	
	for(i=0; i<=4; i++)
	{
		for(k=4; k>i; k--)
		{
			printf(" ");
		}
		for(j=i; j>=0; j--)
		{
			printf("%c",'A'+j);
		}
		printf("\n");
	}
}