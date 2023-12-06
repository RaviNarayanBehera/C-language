#include<stdio.h>
#include<conio.h>
main()
{
	int x,y;
	
	printf("Enter array A's size : ");
	scanf("%d",&x);
	printf("Enter Elements of A :\n");
// For enter array of A element....		
	int i,a[x];
	
	for(i=0; i<x; i++)
	{
		printf("a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\nArray A's Element : ");
	
	for(i=0; i<x; i++)
	{
		printf("%d ",a[i]);
	}
// For enter array of B element....		
	printf("\n\nEnter array B's size : ");
	scanf("%d",&y);
	printf("Enter Elements of B :\n");
	
	int j,b[y];
	
	for(j=0; j<y; j++)
	{
		printf("b[%d] : ",j);
		scanf("%d",&b[j]);
	}
	
	printf("\nArray B's Element : ");
	
	for(j=0; j<y; j++)
	{
		printf("%d ",b[j]);
	}
	
// Now Merging of A & B in new array 'C'.....

	int c[x+y];
	
	for(i=0; i<x; i++)
	{
		c[i]=a[i];
	}
	
	for(j=0; j<y; j++)
	{
		c[x+j]=b[j];
	}
	
	printf("\n\nArray C is : ");
	for(i=0; i<x+y; i++)
	{
		printf("%d ",c[i]);
	}
	
}
