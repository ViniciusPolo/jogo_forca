#include "forca.h" //header

int main()
{
    do
    {

        bool acertou, enforcou = false;
        char palavraSecreta[TAMANHO_PALAVRA];
        char chutes[26];
        int tentativas = 0;

        escolhepalavra(palavraSecreta);
        abertura();

        do
        {

            desenhaforca(palavraSecreta, chutes, &tentativas);
            chuta(chutes, &tentativas);
            enforcou = enforcado(&tentativas, chutes, palavraSecreta);
            acertou = ganhou(palavraSecreta, chutes, &tentativas);

            if (acertou)
            {
                mensagemvitoria();
            }
            else if (enforcou)
            {
                mensagemderrota(palavraSecreta);
            }

        } while (!acertou && !enforcou);

        adicionapalavra();
           
    } while (jogarNovamente());
}