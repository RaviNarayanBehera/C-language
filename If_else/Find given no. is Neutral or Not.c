#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	
	printf("Enter the number := ");
	scanf("%d",&a);
	
	if(a==0)
	{
		printf("'%d' It is a 'Neutral' number.",a);
	}
	else
	{
		if(a>=1)
		{
			printf("\n'%d' It is Non-Neutral and Positive number.",a);
		}
		else
		{
			printf("\n'%d' It is Non-Neutral and Negative number.",a);
		}
	}
}