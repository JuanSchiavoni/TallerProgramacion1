#include <stdio.h>

#define MIN(X,Y) (X)<(Y)? (X):(Y)

int main () {

    int a, b, c;
    printf("Ingrese un numero: \n");
    scanf("%d", &a);
    printf("Ingrese ptro numero: \n");
    scanf("%d", &b);
    c=MIN(a,b);
    printf("El numero menor es: %d\n", c);

return 0;
}
