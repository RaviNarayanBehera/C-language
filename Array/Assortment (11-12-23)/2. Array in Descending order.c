#include<stdio.h>
#include<conio.h>
main()
{
	int m;
	
	printf("Enter size of array : ");
	scanf("%d",&m);
	
	int i,j,a[m];
	
	printf("\nEnter element of array : \n");
	
	for(i=0; i<m; i++)
	{
		printf("a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	int temp = 0;
	
	for(i=0; i<m; i++)
	{
		for(j=i+1; j<m; j++)
		{
			if(a[i]<a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("\nDescending Order : ");
	
	for(i=0; i<m; i++)
	{
		printf("%d ",a[i]);
	}
	
	
	
	
}