#include <stdio.h>

int main () {
    int a, b, i, suma=0;
    printf("Ingrese dos numeros, 1º el menor y 2º el mayor \n");
    scanf("%d%d", &a, &b);
    if (a<b) {
        for (i=a; i<=b;i++) {
            suma=suma+i;
        }
        printf("La suma de los numeros entre %d y %d es: %d", a, b, suma);
    } else {
        printf("El primer numero es mayor al segundo, reingrese \n");
    }
return 0;
}
