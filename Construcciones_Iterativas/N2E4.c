#include <stdio.h>

int main () {
    int n, suma=0, cont=0;
    float prom=0;
    do {
        printf("Ingrese numeros, 0 para salir\n");
        scanf ("%d", &n);
        suma= suma + n;
        cont=cont+1;
    }while (n!=0);
    cont= cont - 1;
    prom = suma/cont;
    printf("el promedio de los %d numeros es: %f\n", cont, prom);
return 0;
}
