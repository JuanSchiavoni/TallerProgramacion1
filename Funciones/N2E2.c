#include <stdio.h>

int main () {
    int A[10], i, esta;
    for(i=0; i<10; i++) {
        A[i]=i;
        carga (A);
        muestra (A);
        esta= pertenece(esta);
        printf("%d esta en el array\n", esta);
    }
    return 0;
}

void carga(int A[10]) {
    int i;
    for (i=0; i<10; i++) {
        printf("Ingrese el numero #%d del array:\n", i+1);
        scanf("%d", &A[i]);
    }
}

void muestra (int A[10]) {
    int i;
    printf("El array queda asi: \n");
    for (i=0; i<10; i++) {
        printf("%d - ", A[i]);
    }
}

int pertenece (int A[10], int n) {
    int i;
    printf("Ingrese el numero a buscar\n");
    scanf("%d", &n);
    for (i=0; i<10; i++) {
        if (A[i]==n) {
            printf("El numero %d esta en el array \n", n);
        }
    }
    return n;
}
