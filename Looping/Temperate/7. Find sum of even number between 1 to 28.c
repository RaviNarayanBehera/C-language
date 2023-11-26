#include<stdio.h>
#include<conio.h>
main()
{
	int a=1,b=28,sum=0;
	
	while(a<=b)
	{
		if(a%2==0)
		{
			printf("%d ",a);
			sum=sum+a;
		}
		
		a++;
		
	}
		
	printf("\nSum of Even no. between 1 to 28 is %d",sum);

}