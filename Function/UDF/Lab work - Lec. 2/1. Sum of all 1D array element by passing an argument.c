#include<stdio.h>
#include<conio.h>
void array(int sum)
{
	printf("\nSum of array is %d.",sum);
}
main()
{
	int m;
	printf("Enter size of array : ");
	scanf("%d",&m);
	
	int a[m];
	printf("\nEnter elements of array : \n");
	
	int i,sum=0;
	
	for(i=0; i<m; i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<m; i++)
	{
		sum= sum + a[i];
	}
	
	array(sum);
}
