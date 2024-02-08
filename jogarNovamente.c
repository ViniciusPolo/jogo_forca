#include <stdio.h>
#include <stdbool.h>
#include <string.h> //used for strlen

bool jogarNovamente(){
    printf("Você deseja jogar novamente (S/N)?");
    char jogaNovamente;
    scanf(" %c", &jogaNovamente);
    if(jogaNovamente == 'S'){
        return true;
    } else {
        return false;
    }
}