#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define _GNU_SOURCE

void buscaAleato(char *fileName, int lineNumber, char *p);
void mensajeEntrada();

int main() {

int i,desea,partidas,parti,PuntajeFinal,prom, linea, w=0;
int j=6;
int win = 0;
int intentos=1;
int puntaje = 5000;
int puntajes[9]= {0, 0, 0, 0, 0, 0, 0, 0, 0};
char palabra[6],aux[6],int1[6],int2[6],int3[6],int4[6],int5[6],int6[6],word[6],words1[6],words2[6],words3[6],words4[6],words5[6],words6[6],words7[6],words8[6];
char words[30][6];


// MUESTRA DE TABLERO VACIO Y BIENVENIDA //
printf("!BIENVENIDO A WORDLE!!\n\n");
mensajeEntrada();
for (i=0;i<6;i++){
    printf("     _ _ _ _ _");
    printf("\n");
}

do {printf("\n¿Cuantas partidas desea jugar?\n Minimo 1 // Maximo 8.\n>");
scanf("%d",&partidas);
} while (partidas>8 || partidas<1);
printf("\nQUE COMIENCE EL JUEGO!!\n\n");

parti = 1;

srand(time(NULL));


do{
    printf("\n\n--------------------------------- Partida #%d/%d ---------------------------------",parti, partidas);
    printf("\nPuntaje de la partida: %d\n",puntaje);

    linea=rand()%31;
    buscaAleato("palabras.txt", linea, words);


    word[0] = words[w][0];
    word[1] = words[w][1];
    word[2] = words[w][2];
    word[3] = words[w][3];
    word[4] = words[w][4];

    // INTENTOS //
    do {
        printf("\n\n\nIntento #%d\nIngrese una palabra:\n>",intentos);
    scanf("%s",&palabra);
    printf("\nTu puntaje es: %d\n\n     %c %c %c %c %c\n",puntaje,palabra[0],palabra[1],palabra[2],palabra[3],palabra[4]);
    j--;

    for (i=0;i<j;i++){
    printf("     _ _ _ _ _\n");
    }
    printf("\n\n");

    for (i=0 ;i<5; i++){
        if (intentos==1) { int1[i] = palabra[i]; }
        if (intentos==2) { int2[i] = palabra[i]; }
        if (intentos==3) { int3[i] = palabra[i]; }
        if (intentos==4) { int4[i] = palabra[i]; }
        if (intentos==5) { int5[i] = palabra[i]; }
        if (intentos==6) { int6[i] = palabra[i]; }


        if (palabra[i] == word[i]) {
                    printf("La %c es VERDE\n",palabra[i]);
                    if (intentos==1) {puntaje = puntaje + 100;}
                    if (intentos==2 && int2[i] != int1[i] ) {puntaje = puntaje + 100;}
                    if (intentos==3 && int3[i] != int2[i] && int3[i] != int1[i] ) {puntaje = puntaje + 100;}
                    if (intentos==4 && int4[i] != int3[i] && int4[i] != int2[i] && int4[i] != int1[i] ) {puntaje = puntaje + 100;}
                    if (intentos==5 && int5[i] != int4[i] && int5[i] != int3[i] && int5[i] != int2[i] && int5[i] != int1[i] ) {puntaje = puntaje + 100;}
                    }

        else if(palabra[i] != word[i] &&
                palabra[i] == word[0] ||
                palabra[i] == word[1] ||
                palabra[i] == word[2] ||
                palabra[i] == word[3] ||
                palabra[i] == word[4] ) {
                    printf("La %c es AMARILLA\n",palabra[i]);
                    if (intentos==1) {puntaje = puntaje + 50;}
                    if (intentos==2 && int2[i] != int1[i] ) {puntaje = puntaje + 50;}
                    if (intentos==3 && int3[i] != int2[i] && int3[i] != int1[i] ) {puntaje = puntaje + 50;}
                    if (intentos==4 && int4[i] != int3[i] && int4[i] != int2[i] && int4[i] != int1[i] ) {puntaje = puntaje + 50;}
                    if (intentos==5 && int5[i] != int4[i] && int5[i] != int3[i] && int5[i] != int2[i] && int5[i] != int1[i] ) {puntaje = puntaje + 50;}
                    }

        else if(palabra[i] != word[i] &&
                palabra[i] != word[0] ||
                palabra[i] != word[1] ||
                palabra[i] != word[2] ||
                palabra[i] != word[3] ||
                palabra[i] != word[4])  printf("La %c es GRIS\n",palabra[i]);
    }


    i=-1;

    do {
        i++;
      if (word[i]=='\0' && palabra[i] == word[i]){(win=10);}
        } while (palabra[i] == word[i]);

printf("\n\n\n");

if (win==10){
    printf("FELICITACIONES, ACERTASTE LA PALABRA.\n");
    puntaje= puntaje + 2000;
        if (intentos==1) {
        printf("ACERTASTE EN EL PRIMER INTENTO ¡¡+10000 puntos!!");
        puntaje = 10000; }
    }
else {
    intentos = intentos + 1;
    puntaje = puntaje - 500;
    }

} while (intentos<7 && win!=10);


        if (parti==1) { puntajes[1] = puntaje; }
        if (parti==2) { puntajes[2] = puntaje; }
        if (parti==3) { puntajes[3] = puntaje; }
        if (parti==4) { puntajes[4] = puntaje; }
        if (parti==5) { puntajes[5] = puntaje; }
        if (parti==6) { puntajes[6] = puntaje; }
        if (parti==7) { puntajes[7] = puntaje; }
        if (parti==8) { puntajes[8] = puntaje; }

if(win!=10){
    printf("Ups! Alcanzaste el maximo de intentos :(. La palabra a adivinar era %s\n",word);
    puntajes[parti] = 0;
    printf("Su puntaje en esta ronda fue: %d",puntajes[parti]);
    }

PuntajeFinal = puntajes[1] + puntajes[2] + puntajes[3] + puntajes[4] + puntajes[5] + puntajes[6] + puntajes[7] + puntajes[8];

printf("\n\n--------------------------------------------------------------------------\n\n");

printf("\n\n¿Desea seguir jugando? Indique 1 por SI y 0 por NO.\n\n>");
scanf("%d",&desea);

if (desea==0){printf("\n\nHa finalizado su partida. Su puntaje final es: %d",PuntajeFinal);}

if (desea==1 && parti==partidas){printf("\n\nYa agotaste todas tus partidas.\nSu puntaje final es: %d",PuntajeFinal);}


parti= parti+1;


// RESETEOS //
win=0;
intentos=1;
j=6;
puntaje=5000;


} while (desea!=0 && parti<=partidas);

printf("\n\nPuntaje de la partida 1 : %d",puntajes[1]);
printf("\n\nPuntaje de la partida 2 : %d",puntajes[2]);
printf("\n\nPuntaje de la partida 3 : %d",puntajes[3]);
printf("\n\nPuntaje de la partida 4 : %d",puntajes[4]);
printf("\n\nPuntaje de la partida 5 : %d",puntajes[5]);
printf("\n\nPuntaje de la partida 6 : %d",puntajes[6]);
printf("\n\nPuntaje de la partida 7 : %d",puntajes[7]);
printf("\n\nPuntaje de la partida 8 : %d",puntajes[8]);

prom = PuntajeFinal/(parti-1);
printf("\n\nEl promedio de las %d rondas jugadas es: %d\n\n\n\n",parti-1,prom);

return 0;
}

void buscaAleato(char *fileName, int lineNumber, char *p) {
    FILE * fp;
    char * line = NULL;
    size_t len = 0;
    ssize_t read;

    fp = fopen(fileName, "r");
    if (fp == NULL)
        exit(EXIT_FAILURE);

    int i=1;
    while ((read = getline(&line, &len, fp)) != -1) {
        if (i==lineNumber) {
            //MUESTRA LA PALABRA
           //printf("%s", line);
           strcpy(p, line);
           return ;
        }
        i++;
    }
}

void mensajeEntrada() {
    printf("\nEl juego consiste en hallar una palabra de 5 letras en 6 intentos.\n");
    printf("Al ingresar una palabra obtendra por resultados:\n");
    printf(">VERDE    - Si la letra esta en la ubicacion correcta\n");
    printf(">AMARILLO - Si la letra esta en la palabra pero en una ubicacion erronea\n");
    printf(">GRIS     - Si la letra no esta en la palabra\n");
}

