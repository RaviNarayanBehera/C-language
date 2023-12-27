#include<stdio.h>
#include<conio.h>
int factorial(int a)
{
	if(a==1)
	{
		return 1;
	}
	return a*factorial(a-1);
}
void main()
{
	int a;
	printf("Enter the value : ");
	scanf("%d",&a);
	
	factorial(a);
	
	printf("%d",factorial(a));
}