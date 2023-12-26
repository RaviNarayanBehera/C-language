#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char a[100];
	
	printf("Enter something := ");
	gets(a);
	
	int i,check=0;
	
	for(i=0; i<a[i]; i++)
	{
		if(a[i]>=48 && a[i]<=57)
		{
			check=1;
		}
	}
	if(check==1)
		{
			printf("\nString is Numeric");
		}
		else
		{
			printf("\nString is Non-Numeric");
		}
}