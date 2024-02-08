#include <stdio.h>
#include <stdbool.h>
#include <string.h> //used for strlen

int enforcado(int* chutesDados, char chutes[26], char palavraSecreta[TAMANHO_PALAVRA]) {

    int erros = 0;

    erros = chuteserrados((chutesDados), chutes, palavraSecreta);

    return erros >= 5;
}
