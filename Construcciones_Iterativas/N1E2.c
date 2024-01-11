#include <stdio.h>

int main () {
    int i;
    printf("Los numeros impares entre 1 y 100 son: \n");
    for (i=1; i<100; i+=2) {
        printf("%d ", i);
    }
return 0;
}
