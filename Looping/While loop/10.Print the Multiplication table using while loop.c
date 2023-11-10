#include<stdio.h>
#include<conio.h>
main()
{
	int a=1 , user;
	
	printf("Enter no.:= ");
	scanf("%d",&user);
	
	while(a<=10)
	{
		printf("\n%d * %d = %d",user,a,a*user);
		a++;
	}
}