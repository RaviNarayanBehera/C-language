#include<stdio.h>
#include<conio.h>
#include<string.h>
void string(int i)
{
	printf("\nLength of string is %d.",i);
}
main()
{
	char a[100];
	printf("Enter something := ");
	gets(a);
	
	int i;
	
	i = strlen(a);
	
	string(i); 
}