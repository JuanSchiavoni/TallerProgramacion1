#include <stdio.h>
#define N 10

int main () {
    int i, fact=1;
    for (i=N; i>0; i--){
        fact=fact*i;
    }
    printf("El factorial de %d es %d\n", N, fact);
return 0;
}
