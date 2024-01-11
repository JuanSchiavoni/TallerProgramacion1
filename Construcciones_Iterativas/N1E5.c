#include <stdio.h>

int main () {
    int a, b, i, multi=1;
    printf("Ingrese dos numeros, 1º el menor y 2º el mayor \n");
    scanf("%d%d", &a, &b);
    if (a<b) {
        for (i=a; i<=b;i++) {
            multi=multi*i;
        }
        printf("La multiplicacion de los numeros entre %d y %d es: %d", a, b, multi);
    } else {
        printf("El primer numero es mayor al segundo, reingrese \n");
    }
return 0;
}

