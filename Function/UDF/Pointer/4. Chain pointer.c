#include<stdio.h>
#include<conio.h>
main()
{
	int a=18;
	int *ptr = &a;
	int **ptr2 = &ptr;
	int ***ptr3 = &ptr2;
	
	printf("%d",***ptr3);
}