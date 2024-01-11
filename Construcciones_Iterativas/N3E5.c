#include <stdio.h>

int main() {
    int matriz[4][4], fila, col;
    for(fila=0; fila<4; fila++) {
        for(col=0; col<4; col++) {
            printf("De la fila #%d, digite el valor #%d: ", fila+1, col+1);
            scanf("%d", &matriz[fila][col]);
        }
    }
    printf("\n\n");
    for(fila=0; fila<4; fila++) {
        for(col=0; col<4; col++) {
            printf("%d ", matriz[fila][col]);
        }
        printf("\n");
    }
return 0;
}
