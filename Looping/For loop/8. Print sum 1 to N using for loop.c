#include<stdio.h>
#include<conio.h>
main()
{
	int x,n,sum=0;
	
	printf("Enter no.:= ");
	scanf("%d",&n);
	
	for(x=1; x<=n;  x++)
	{
		printf("%d ",x);
		sum+=x;
	}	
		printf("= '%d' ",sum);
}