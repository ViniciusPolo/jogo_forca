#include <stdio.h>

void chuta(char chutes[26], int* chutesDados){
    printf("\n");
        char chute;
        scanf(" %c", &chute); //espaço antes do %c mostra que a palavra acabou

        chutes[(*chutesDados)] = chute;
        (*chutesDados)++;
}