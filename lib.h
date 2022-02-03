#include <stdio.h>
#include <stdlib.h>

struct init_poly{   
                    int pow ;
                    int* coef ;
                };

typedef struct init_poly poly ;
typedef struct init_poly* pt_poly ;