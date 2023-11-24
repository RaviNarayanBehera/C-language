#include<stdio.h>
#include<conio.h>
main()
{
	printf("Count total number of digits in a number ?");
	int count,x=0;
	
	printf("\n\nEnter any no.:= ");
	scanf("%d",&count);
	
	while(count>0)
	{
		count/=10;
		x++;
	} 	
	printf("Total digit := %d",x);

}