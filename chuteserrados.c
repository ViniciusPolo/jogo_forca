#include <stdio.h>

int chuteserrados(int* chutesDados, char chutes[26], char palavraSecreta[TAMANHO_PALAVRA]){
    int erros = 0;

    for(int i = 0; i < (*chutesDados); i++) {

        int existe = false;

        for(int j = 0; j < strlen(palavraSecreta); j++) {
            if(chutes[i] == palavraSecreta[j]) {

                existe = true;
                break;
            }
        }

        if(!existe) erros++;
    }

    return erros;

}