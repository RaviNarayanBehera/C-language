#include<stdio.h>
#include<conio.h>
main()
{
	int x=1,y;
	
	printf("Enter no.:= ");
	scanf("%d",&y);
	
	for(x; x<=10; x++)
	{
		printf("%d ",x);
		if(x==y)
		{
			break;
		}
	}
}