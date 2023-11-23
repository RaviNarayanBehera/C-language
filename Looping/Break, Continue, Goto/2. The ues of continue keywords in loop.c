#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	
	printf("Enter no.:= ");
	scanf("%d",&b);
	
	for(a=1; a<=10; a++)
	{
		if(a==b)
		{
			continue;
		}
		printf("%d ",a);
	}
}