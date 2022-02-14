#include<stdio.h>
#include<string.h>
#include <limits.h>
int str[100];
int a=0;
void main()
{
    int a,b,i,andmask,k;
    printf("Enter a Number:- ");
    scanf("%d", &a);
    printf("\n");
    printf("Before: - \n");
    for ( i = 31 ; i >= 0 ; i-- )
    {
        andmask = 1 << i ;
        k = a & andmask ;
        k == 0 ? printf ( "0" ) : printf ( "1" ) ;
    }
    printf("\n");
    printf("After: - \n");
    for ( i = 0 ; i <= 31 ; i++ )
    {
        andmask = 1 << i ;
        k = a & andmask ;
        k == 0 ? printf ( "0" ) : printf ( "1" ) ;
    }
    printf("\n");
}
