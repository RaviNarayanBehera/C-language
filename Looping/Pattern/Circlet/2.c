#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,num=11;
	
	for(i=0; i<=5; i++)
	{
		for(j=0; j<i; j++)
		{
			printf("%d ",num);
			num++;
		}
		printf("\n");
	}
}