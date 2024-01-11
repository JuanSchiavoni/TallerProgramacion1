#include <stdio.h>
#include <stdlib.h>

int main() {
    capicua();
    return 0;
}

void capicua() {
    int n, cifra, reves=0, copia;
    do {
        printf("Ingrese un numero entre 0 y 1000: \n");
        scanf("%d", &n);
    }while(n<0 || n>1000);

    copia = n;
    while(n!=0) {
        cifra = n % 10;
        reves = reves * 10 + cifra;
        n = n / 10;
    }
    if (copia==reves) {
        printf("El numero %d es capicua\n", copia);
    }else {
        printf("El numero %d no es capicua\n", copia);
    }
}
