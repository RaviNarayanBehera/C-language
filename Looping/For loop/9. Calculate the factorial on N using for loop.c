#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,sum=1;
	
	printf("Enter no.:= ");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)
	{
		printf("%d ",i);
		sum*=i;
	}
	printf("= '%d' ",sum);
}