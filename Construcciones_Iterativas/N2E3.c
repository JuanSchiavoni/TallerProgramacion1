#include <stdio.h>

int main () {
    int i, sum=0;
    for (i=1; i<=100; i++) {
        sum= sum + (i*i);
    }
    printf("la suma de los cuadrados de los primeros 100 enteros es: %d", sum);
return 0;
}
