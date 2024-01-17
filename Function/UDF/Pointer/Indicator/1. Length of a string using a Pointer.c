#include<stdio.h>
main()
{
	char str[100];
	
	printf("Enter the name : ");
	gets(str);
	
	char *ptr=str;
	int count=0;
	
	while(*ptr!='\0')
	{
		count++;
		ptr++;
	}
		
	printf("Length of String is %d.",count);
	
}