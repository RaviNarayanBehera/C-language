#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	
	printf("Enter size of array := ");
	scanf("%d",&a);
	
	int m[a],i,j;
	
	printf("\nEnter element of array :\n");
	
	for(i=0; i<a; i++)
	{
		printf("m[%d] : ",i);
		scanf("%d",&m[i]);
	}
	
	for(i=0; i<a; i++)
	{
		for(j=i+1; j<a; j++)
		{
			if(m[i]>m[j])
			{
				int temp = m[i];
				m[i] = m[j];
				m[j] = temp;
			}
		}
	}
	
	printf("\nAscending order : ");
	
	for(i=0; i<a; i++)
	{
		printf("%d ",m[i]);
	}




	
	
}
