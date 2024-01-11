#include <stdio.h>

int main () {
    int n[10], suma=0, i;
    float prom;
    for (i=0; i<10; i++) {
        printf("ingrese el numero %d ", i+1);
        scanf("%d", &n[i]);
        suma=suma+n[i];
    }
    prom=suma/10.0;
    printf("la suma es %d y el promedio es %f\n", suma, prom);
return 0;
}
