#include <stdio.h>

int main () {
    char letra = 'a';
    do {
        printf("%c.\n", letra);
        letra++;
    }while(letra<='z');
return 0;
}
