#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char a[100];
	
	printf("Enter the word : ");
	gets(a);
	
	int length = strlen(a);
	
	int i,j,digit=0,alpha=0,sp=0;
	
	for(i=0; i<length; i++)
	{
		if(a[i]>=48 && a[i]<=57)
		{
			digit++;
		}
		else if(a[i]>=65 && a[i]<=90 || a[i]>=97 && a[i]<=122)
		{
			alpha++;
		}
		else
		{
			sp++;
		}
		
	}
	printf("\nNumber of Digit's are %d ",digit);
	printf("\nNumber of Alphabet's are %d",alpha);
	printf("\nNumber of Special Character's are %d",sp);
	
	
}