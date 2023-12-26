#include<stdio.h>
#include<conio.h>
#include<string.h>
char main()
{
	char a[100],b[100];
	
	printf("Enter something := ");
	gets(a);

	int j;
	
	for(j=0; j<a[j]; j++)
	{
		b[j]=a[j];
	}
	
	printf("\nThe copied string is : ");
	puts(b);


/*	With special function

	char a[100],b[100];
	
	printf("Enter something := ");
	gets(a);
	strcpy(b,a);
	printf("\nThe copied string is : ");
	puts(b);	
	
*/

}