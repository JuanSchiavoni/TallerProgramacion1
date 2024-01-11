#include <stdio.h>

int main() {
    divisores();
    return 0;
}

void divisores () {
    int n, i;
    printf("Ingrese el numero a evaluar:\n\n");
    scanf("%d", &n);
    for(i=1; i<=n; i++) {
        if(n%i==0) {
            printf("\n\n%d es divisor de %d\n", i, n);
        }
    }
}
