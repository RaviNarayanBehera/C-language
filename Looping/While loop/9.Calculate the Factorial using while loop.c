#include<stdio.h>
#include<conio.h>
main()
{
	int a=1 , N , sum=1;
	
	printf("Enter no.:= ");
	scanf("%d",&N);
	
	while(a<=N)
	{
		printf("%d ",a);
		sum *=a;
		a++;	
	}
	printf(" = '%d'",sum);
}