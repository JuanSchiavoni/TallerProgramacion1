#include <stdio.h>

int main () {
    int i, t;
    for(i=1; i<=10; i++) {
        for(t=1; t<=10; t++) {
            printf("%d x %d = %d\n", i, t, i*t);
        }
    printf("\n");
    }
return 0;
}
