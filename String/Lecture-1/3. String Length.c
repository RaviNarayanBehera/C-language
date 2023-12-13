#include<stdio.h>
#include<conio.h>
main()
{
    char s[1000];
    int i;
 
    printf("Enter the String: ");
    scanf("%s", s);
 
    for (i = 0; s[i]; ++i);
 
    printf("\nLength of String is %d", i);

}