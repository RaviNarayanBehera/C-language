#include<stdio.h>
#include<conio.h>
main()
{
	int i=0;
	char x[100];
	
	printf("Enter Lowercase word : ");
	scanf("%s",&x);
	
	for(i; x[i]; i++)
	{
		if(x[i]>=97 && x[i]<=122)
		{
			x[i]-=32;
		}
	}
	printf("\nString in Uppercase word : %s",x);
}