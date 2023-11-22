#include<stdio.h>
#include<conio.h>
main()
{
	int x,n;
	
	printf("Enter no.:= ");
	scanf("%d",&n);
	
	for(x=1; x<=n; x+=2)
	{
		printf("%d ",x);
	}
}