#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1;
    int n2;
    int n3;

    printf("Numero:");
    scanf("%d", &n1);

    printf("Numero:");
    scanf("%d", &n2);

    printf("Numero:");
    scanf("%d", &n3);

if(n1>n2)
    if( n1> n3)
        if(n2>n3)
            printf( "%d, %d, %d", n3,n2,n1);
        else
            printf( "%d,%d,%d", n2,n3,n1);
    else
            printf("%d,%d,%d", n2,n1,n3);
else
    if (n2>n3)
        if ( n1>n3)
            printf( "%d,%d,%d", n3, n1, n2);
        else
            printf("%d,%d,%d", n1,n3,n2);
    else
            printf("%d,%d,%d", n1,n2,n3);

        return 0;
}
