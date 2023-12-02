#include<stdio.h>
#include<conio.h>
main()
{
	int i,j;
	char a='-',b='|';
	
	for(i=1; i<=5; i++)
	{
		for(j=i; j>=1; j--)
		{
			if(j%2)
			{
				printf("%c ",a);
			}
			else
			{
				printf("%c ",b);
			}
		}
		printf("\n");
	}
}