#include<stdio.h>
#include<conio.h>
main()
{
	int m;
	
	printf("Enter size : ");
	scanf("%d",&m);

	int i,j,a[m],temp=0;
	
	printf("\nEnter element : \n");
	
	for(i=0; i<m; i++)
	{
		printf("a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<m; i++)
	{
		for(j=i; j<m; j++)
		{
			if(a[i]>a[j])
			{		
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	
	printf("\nLeft-rotate : ");
	for(i=0; i<m; i++)
	{
		printf("%d ",a[i]);
	}

	for(i=0; i<m; i++)
	{
		for(j=i; j<m; j++)
		{
			if(a[i]<a[j])
			{		
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	
	printf("\n\nRight-rotate : ");
	for(i=0; i<m; i++)
	{
		printf("%d ",a[i]);
	}

}
