#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	
	printf("Enter size of array : ");
	scanf("%d",&a);
	
	int i,m[a],n[a];
	
	printf("\nEnter element of M's array :\n");
	
	for(i=0; i<a; i++)
	{
		printf("m[%d] : ",i);
		scanf("%d",&m[i]);
	}
	
	printf("\nEnter element of N's array :\n");
	
	for(i=0; i<a; i++)
	{
		printf("n[%d] : ",i);
		scanf("%d",&n[i]);
	}
	
	int o[i];
	
	for(i=0; i<a; i++)
	{
		o[i]=m[i]+n[i];
	}
	
	printf("\nSum of array : ");
	
	for(i=0; i<a; i++)
	{
		printf("%d ",o[i]);
	}
}