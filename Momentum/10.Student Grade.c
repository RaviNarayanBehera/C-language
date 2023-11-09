#include<stdio.h>
#include<conio.h>
main()
{
	float phy,che,maths,total,per;

	printf("Physics Mark := ");
	scanf("%f",&phy);
	
	printf("Chemistry Mark := ");
	scanf("%f",&che);

	printf("Maths Mark := ");
	scanf("%f",&maths);
	
	total = phy + che + maths;
	
	printf("\n\nTotal := %0.2f /300",total);
	
	per=total/3;
	
	printf("\n\nPer = %0.2f %%",per);
	if(per>=90)
	{
		printf("\n\nGrade 'A'");
	}
	else if(per>=80)
	{
		printf("\n\nGrade 'B'");
	}
	else if(per>=65)
	{
		printf("\n\nGrade 'C'");
	}
	else if(per>=55)
	{
		printf("\n\nGrade 'D'");
	}
	else if(per>=45)
	{
		printf("\n\nGrade 'E'");
	}
	else if(per>=40)
	{
		printf("\n\nGrade 'Pass'");
	}
	else
	{
		printf("\n\n'Better luck next time.'");
	}	
}