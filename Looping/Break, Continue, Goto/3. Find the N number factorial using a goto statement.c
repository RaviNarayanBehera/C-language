#include<stdio.h>
#include<conio.h>
main()
{
	int x=1;
	int y,sum=1;
	
	printf("Enter no.:= ");
	scanf("%d",&y);
	
	
	g:
		
		printf("%d ",x);
		
		sum*=x;
		x++;
	
		if(x<=y)
		{
			
			goto g;
		}   
		printf("= '%d'",sum);  
}