#include<stdio.h>
#include<conio.h>
main()
{
	int u;
	
	printf("Enter array size := ");
	scanf("%d",&u);
	
	int i,a[u];
	
	printf("\nEnter array element : \n\n");
	
	for(i=0; i<u; i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n Length of an Array : %d",u);

}