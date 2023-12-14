#include<stdio.h>
#include<conio.h>       
#include<string.h>
main()
{
	char a[100];
	
	printf("Enter the sentence : ");
	gets(a);
	
	printf("\n");
	int i;
	
	if(a[0]>=97 && a[0]<=122)
	{
		a[0]=a[0]-32;
	}
	
	for(i=1; a[i]; i++)
	{
		if(a[i]>=97 && a[i]<=122)
		{
			a[i];
		}
		else if(a[i]>=65 && a[i]<=90)
		{
			a[i]=a[i]+32;	
		}
	}
	
	
	puts(a);
	
}