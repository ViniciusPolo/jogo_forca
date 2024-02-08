#include <stdio.h>
#include <stdbool.h>
#include <string.h> //used for strlen

bool ganhou(char palavraSecreta[TAMANHO_PALAVRA], char chutes[26], int* chutesDados){
    for(int i = 0; i < strlen(palavraSecreta); i++) {
        if(!jaChutou(palavraSecreta[i], chutes, (*chutesDados))) {
            return false;
        }
    }

    return true;
}