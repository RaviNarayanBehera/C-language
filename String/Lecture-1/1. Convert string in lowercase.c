#include<stdio.h>
#include<conio.h>
main()
{
	int i=0;
	char x[100];
	
	printf("Enter Uppercase word: ");
	scanf("%s",&x);
	
	for(i; x[i]; i++)
	{
		if(x[i]>=65 && x[i]<=90)
		{
			x[i]+=32;
		}
	}
	printf("\nString in Lowercase word : %s",x);
}