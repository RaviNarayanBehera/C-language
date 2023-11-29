#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,k;
	
	for(i=5; i>0; i--)
	{
		for(k=i; k<5; k++)
		{
			printf(" ");
		}
		for(j=0; j<i; j++)
		{
			printf("%c",'A'+j);
		}
		printf("\n");
	}
}