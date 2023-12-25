#include<stdio.h>
#include<string.h>
main()
{
	char a[100],b[100];
	
	printf("Enter a string := ");
	gets(a);
	
	printf("Enter a string := ");
	gets(b);

	
	int i,check=0;
	
	for(i=0;a[i]!='\0';i++)
	{
		
			if(a[i]==b[i])
			{
				check=1;
			}
			else
			{
				check=0;
			}
		
	}
	
	if(check==1)
		{
			printf("String are same.");
		}
		else
		{
			printf("String are not same.");
		}
		
}
