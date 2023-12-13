#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char str[100];
	
	printf("Enter a string : ");
	scanf("%s",str);
	
	printf("\nReverse string : %s",strrev(str));

}