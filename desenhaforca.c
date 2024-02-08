#include <stdio.h>
#include <stdbool.h>

void desenhaforca(char palavraSecreta[TAMANHO_PALAVRA], char chutes[26], int* chutesDados){

    int erros = chuteserrados(chutesDados, chutes, palavraSecreta);

    printf("  _______       \n");
    printf(" |/      |      \n");
    printf(" |      %c%c%c  \n", (erros>=1?'(':' '), (erros>=1?'_':' '), (erros>=1?')':' '));
    printf(" |      %c%c%c  \n", (erros>=3?'\\':' '), (erros>=2?'|':' '), (erros>=3?'/': ' '));
    printf(" |       %c     \n", (erros>=2?'|':' '));
    printf(" |      %c %c   \n", (erros>=4?'/':' '), (erros>=4?'\\':' '));
    printf(" |              \n");
    printf("_|___           \n");
    printf("\n\n");

    for(int i = 0; i < strlen(palavraSecreta); i++){
            
            bool achou = jaChutou(palavraSecreta[i], chutes, (*chutesDados));

            if(achou){
                printf("%c ", palavraSecreta[i]);

            } else {
                printf("_ ");
            }
        };
        printf("\n");
}