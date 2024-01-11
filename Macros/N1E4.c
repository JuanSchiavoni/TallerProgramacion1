#include <stdio.h>

#define DIVI(X,Y) (X%Y)==0? 1:0

int main () {

    int a,b;
    printf("Ingrese 2 numeros: \n");
    scanf("%d%d", &a, &b);
    if (b!=0) {

        if(DIVI(a,b)>0) {

            printf("%d es divisible por %d", a, b);

        } else {

            printf("%d no es divisible por %d", a, b);
        }

    } else {

        printf("Ingrese un segundo numero distinto de 0 \n");
    }

return 0;
}
