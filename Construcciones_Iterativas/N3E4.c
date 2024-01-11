#include <stdio.h>

int main () {
    int ini1=0, ini2=1, gene=0, i;
    printf("1, ");
    for(i=1; i<25; i++) {
        gene= ini1 + ini2;
        ini1= ini2;
        ini2= gene;
        printf("%d, ", gene);
    }
return 0;
}
