#include <stdio.h>

int main () {
    int n, p, m, i, salida;
    printf("ingrese 3 numeros positivos: \n");
    do {
        printf("El primer numero debe ser menor al tercero \n");
        scanf("%d%d%d", &n,&p, &m);
    }while (n>m);
    printf("Salidas: \n");
    for(i=0; i<=m; i++) {
        salida= n + (i*p);

        printf("%d\n", salida);
    }
return 0;
}
