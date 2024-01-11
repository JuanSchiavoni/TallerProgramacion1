#include <stdio.h>

int main () {
    piram();
    return 0;
}

void piram() {
    int n, i, j, z;
    printf("ingrese la altura del triangulo: \n");
    do {
        printf("ingrese un numero entre 0 y 10\n");
        scanf("%d", &n);
    }while (n<=0 || n>=10);

    for (i=1; i<=n; i++) {
        for (j=i; j<n; j++) {
            printf(" ");
        }
    j=i;

    do {
        printf("%d", j%10);
        j++;
    } while (j<= i -1);

    z= i -2;

    do{
        if(z==0) {
            z --;
        }else {
            printf("%d", z%10);
            z--;
        }
    }while (z>=i);
    printf("\n");
    }
}
