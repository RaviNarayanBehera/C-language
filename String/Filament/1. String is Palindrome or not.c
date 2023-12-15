#include<stdio.h>
#include<string.h>
main()
{
	char a[50];
	
	printf("Enter the value := ");
	gets(a);
	
	int i,check=0;
	int length = strlen(a);
	length = length-1;
	
	
	for(i=0;i<length;i++)
	{
		if(a[i]!=a[length])
		{
			check=1;
		}
		length--;
	}
	
	if(check==0)
	{
		printf("string is palindrom");
	}
	else
	{
		printf("string is not palindrom");
	}


}