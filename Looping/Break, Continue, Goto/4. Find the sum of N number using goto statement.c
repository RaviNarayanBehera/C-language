#include<stdio.h>
#include<conio.h>
main()
{
	int a=1,b,sum=0;
	
	printf("Enter no.:= ");
	scanf("%d",&b);
	
	t:
		printf("%d ",a);
		sum+=a;
		a++;
		
		
		if(a<=b)
		{
			goto t;
		}
		
		printf("= '%d'",sum);
}