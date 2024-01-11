#include <stdio.h>

int main () {
    int n, i;
    do {
        printf("Ingrese un numero: ");
        scanf("%d", &n);
    }while(n<=0);
    for (i=1; i<=n; i++) {
        if(n%i==0) {
            printf("%d es divisor de %d\n", i, n);
        }
    }
return 0;
}
