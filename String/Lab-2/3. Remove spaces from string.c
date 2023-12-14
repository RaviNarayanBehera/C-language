#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char a[100];
	
	printf("Enter the word : ");
	gets(a);
	
	int length = strlen(a);
	
	int i,j,f=1;
	
	for(i=0; i<length; i++)
	{
		for(j=i+1; j<length; j++)
		{
			if(a[i]==' ')
			{
				//f++;
				a[i]=0;
			}
		}
	
		printf("%c",a[i]);
		f=1;
	}
	
	
	
}