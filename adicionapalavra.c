void adicionapalavra() {
    char quer;

    printf("Você deseja adicionar uma nova palavra no jogo (S/N)?");
    scanf(" %c", &quer);

    if(quer == 'S') {
        char novapalavra[TAMANHO_PALAVRA];

        printf("Digite a nova palavra, em letras maiúsculas: ");
        scanf("%s", novapalavra);

        FILE* f;

        f = fopen("palavras.txt", "r+"); //read and plus
        if(f == 0) {
            printf("Banco de dados de palavras não disponível\n\n");
            exit(1);
        }

        int qtd;
        fscanf(f, "%d", &qtd);
        qtd++;
        fseek(f, 0, SEEK_SET); //posiciona no começo do arquivo
        fprintf(f, "%d", qtd); //altera a quantidade

        fseek(f, 0, SEEK_END); //posiciona no começo do arquivo
        fprintf(f, "\n%s", novapalavra); //inclui a palavra

        fclose(f);

    }

}