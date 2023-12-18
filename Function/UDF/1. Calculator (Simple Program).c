#include<stdio.h>
#include<conio.h>
int calc()
{
	char op;
	int a,b;
	
	printf("\nEnter an Operator(+,-,*,/) := ");
	scanf("%s",&op);
	printf("\nEnter the value of a := ");
	scanf("%d",&a);
	printf("Enter the value of b := ");
	scanf("%d",&b);
	
	switch(op)
	{
		case'+' : 
			printf("\nAnswer : %d + %d = %d\n",a,b,a+b);
		break;
		
		case'-' : 
			printf("\nAnswer : %d - %d = %d\n",a,b,a-b);
		break;
		
		case'*' : 
			printf("\nAnswer : %d * %d = %d\n",a,b,a*b);
		break;
		
		case'/' : 
			printf("\nAnswer : %d / %d = %d\n",a,b,a/b);
		break;
	
		default :
			printf("\nPlease enter valid Operator....\n");	
	
	
	}
	
	return calc();

}

main()
{
	int c=calc();		
}