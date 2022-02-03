#include "lib.h"


int main()
{
    poly p ;
    printf("Power =\t") ;
    scanf("%d", &p.pow) ;

    /*Allocaton dynamique debut*/
    p.coef = (int*)malloc(p.pow * sizeof(int)) ; 
    /*Allocaton dynamique fin*/
 
    printf("%d\n", p.pow) ;

    for (int i = 0; i < p.pow; i++)
    {
        printf("Coef_%d = ", i+1) ;
        scanf("%d", p.coef + i) ;
    }
    
    return 0 ;
}