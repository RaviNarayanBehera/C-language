#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	
	printf("Enter no.:= ");
	scanf("%d",&a);
	
	printf("Enter no.:= ");
	scanf("%d",&b);
	
	printf("Enter no.:= ");
	scanf("%d",&c);
	
	if(a<b && a<c)
	{
		printf("\n\n'%d' is minimum number.",a);
	}
	else if(b<c && b<a)
	{
		printf("\n\n'%d' is minimum number.",b);
	}
	else
	{
		printf("\n\n'%d' is minimum number.",c);
	}
}