#include <stdio.h>

int main () {
    primo();
    return 0;
}

void primo () {
    int n, i, cont=0;
    printf("Los n primos entre 1 y 500 son:\n");
    for(n=1; n<500; n++) {
        for(i=1; i<=n; i++) {
            if(n%i==0) {
                cont++;
            }
        }
        if (cont ==2) {
            printf("%d - ", n);
        }
        cont=0;
    }
}
