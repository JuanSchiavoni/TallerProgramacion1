#include <stdio.h>

#define MAX(X,Y) (X)>(Y)? (X):(Y)

int main () {

    int a, b, c;
    printf("Ingese un numero: \n");
    scanf("%d", &a);
    printf("Ingrese otro numero: \n");
    scanf("%d", &b);
    c=MAX(a,b);
    printf("El mayor de los numeros es: %d\n", c);

return 0;
}
