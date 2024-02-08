#include <stdio.h>

void escolhepalavra(char* palavraSecreta){
    //sprintf(palavraSecreta, "MELANCIA");
    FILE* f;
    f = fopen("palavras.txt", "r");
    if(f == 0) {
        printf("Banco de dados de palavras não disponível\n\n");
        exit(1);
    } 

    int qtdedepalavras;
    fscanf(f, "%d", &qtdedepalavras);
    srand(time(0));
    int randomico = rand() % qtdedepalavras;

    for(int i = 0; i <= randomico; i++){
        fscanf(f, "%s", palavraSecreta);
    }

    fclose(f);
}