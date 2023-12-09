#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	
	printf("Enter size of array : ");
	scanf("%d",&a);
	
	int i,m[a];
	
	printf("\nEnter element of array :\n");
	for(i=0; i<a; i++)
	{
		printf("a[%d] : ",i);
		scanf("%d",&m[i]);
	}
	
	int temp,j;
	
	for(i=0; i<a; i++)
	{
		for(j=i+1; j<a; j++)
		{
			if(m[i]<m[j])
			{
				temp=m[i];
				m[i]=m[j];
				m[j]=temp;
			}
		}
	}
	
	printf("\nDecending Order : ");
	
	for(i=0; i<a; i++)
	{
		printf("%d ",m[i]);
	}


	
	
}
