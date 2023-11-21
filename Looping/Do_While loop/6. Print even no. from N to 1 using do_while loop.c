#include<stdio.h>
#include<conio.h>
main()
{
	int x , y=1;

	printf("Enter no.:= ");
	scanf("%d",&x);

	do
	{
		if(x%2==0)
		{
			printf("%d ",x);
		}
			x--;
	}while(x>=y);

}