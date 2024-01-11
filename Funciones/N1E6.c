#include <stdio.h>

int main() {
    int dig;
    dig= digitos(dig);
    printf("La cantidad de digitos es de: %d\n", dig);
    return 0;
}

int digitos (unsigned long long int n) {
    int cont=0;
    printf("Ingrese el numero a evaluar\n");
    scanf("%d", &n);
    while (n !=0) {
        cont++;
        n/= 10;
    }
    return cont;
}
