#include<stdio.h>
#include<conio.h>
main()
{
	
	int a,fd,ld,sum=0;
	
	printf("Enter no.:= ");
	scanf("%d",&a);
	
	ld=a%10;
	
	while(a>=10)
	{
		a=a/10;
	}
	fd=a;
	
	sum=fd+ld;
	
	printf("%d",sum);
	
	
}