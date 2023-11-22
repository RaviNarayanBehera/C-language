#include<stdio.h>
#include<conio.h>
main()
{
	int x,n;
	
	printf("Enetr no.:= ");
	scanf("%d",&n);
	
	for(x=1; x<=n; n--)
	{
		if(n%2==0)
		{
			printf("%d ",n);
		}
	}
}