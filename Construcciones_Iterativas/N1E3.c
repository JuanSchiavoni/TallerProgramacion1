#include <stdio.h>

int main () {
    int i, suma=0;
    printf("La suma de losnumeros impares entre 1 y 100 es: \n");
    for (i=1; i<100; i+=2) {
        suma=suma+i;
    }
    printf("%d ", suma);
return 0;
}

