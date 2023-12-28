#include<stdio.h>
#include<conio.h>
int sum(int a)
{
	if(a==1)
	{
		return 1;
	}
	return a+sum(a-1);
}
void main()
{
	int a;
	printf("Enter the value : ");
	scanf("%d",&a);
	
	sum(a);
            
	printf("%d",sum(a));
}
