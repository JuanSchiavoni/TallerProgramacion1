#include <stdio.h>

int main () {
    int n;
    printf("Ingrese un numero entre 1 y 15: ");
    scanf("%d", &n);
    if(n>0 && n<=15) {
        for (int i=1; i<=n;i++){
            printf("* \n");
        }
    } else {
        printf("El numero no esta en el rango, reingrese");

    }
return 0;
}
