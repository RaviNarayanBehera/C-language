#include<stdio.h>
#include<conio.h>
main()
{
	int n;
	
	printf("Enter size of array : ");
	scanf("%d",&n);
	
	int a[n],i,b[n];
	
	printf("\nEnter 'a' array element : \n");
	
	for(i=0; i<n; i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}	
	
	printf("\n");
	
	for(i=0; i<n; i++)
	{
		b[i]=a[i];
	}
	
	printf("\n\nThe element of 'a' array copied to 'b' array :\n");
    
	for(i=0; i<n; i++)
    {
        printf("b[%d] = %d \n",i, b[i]);
    }
}