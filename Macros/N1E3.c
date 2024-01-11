#include <stdio.h>

#define PAR(X) (X%2)==0? 1:0

int main () {

    int n;
    printf("ingrese un numero: \n");
    scanf("%d", &n);
    if (PAR(n)>0) {
        printf("El numero %d es par", n);
    } else {
        printf("El numero %d es impar", n);
    }
return 0;
}
