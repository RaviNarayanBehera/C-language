#include<stdio.h>
#include<conio.h>
main()
{
	int a=1,sum=1;
	
	while(a<=3)
	{
		printf("%d ",a);
		sum*=a;
		a++;
	}
	printf("= '%d'",sum);
}