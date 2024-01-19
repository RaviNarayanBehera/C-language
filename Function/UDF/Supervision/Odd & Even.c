#include<stdio.h>
#include<conio.h>
main()
{
        int i;
        FILE *f1;
        FILE *f2;
        f1 = fopen("even.txt","w");
        f2 = fopen("odd.txt","w");
        
        printf("Even No.:= ");
        fprintf(f1,"Even No.:= ");
		
		for (i=50;i<=70;i++)
        {
                if (i%2==0)
                {
                        fprintf(f1,"%d ",i);
                        printf("%d ",i);
                }
        }
        
        printf("\nOdd No.:= ");
        fprintf(f2,"Odd No.:= ");
        
		for (i=50;i<=70;i++)
        {
                if (i%2!=0)
                {
                        fprintf(f2,"%d ",i);
                        printf("%d ",i);
                }
        }



}