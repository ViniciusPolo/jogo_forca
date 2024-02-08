#define TAMANHO_PALAVRA 20

#include <stdio.h>
#include <string.h> //used for strlen
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>
#include "abertura.c"
#include "chuteserrados.c"
#include "chuta.c"
#include "jachutou.c"
#include "desenhaforca.c"
#include "escolhePalavra.c"
#include "enforcado.c"
#include "ganhou.c"
#include "mensagemvitoria.c"
#include "mensagemderrota.c"
#include "adicionapalavra.c"
#include "jogarNovamente.c"

void escolhepalavra();
void abertura();
int chuteserrados();
void desenhaforca();
void chuta();
int enforcado();
bool ganhou();
void mensagemvitoria();
void mensagemderrota();
void adicionapalavra();
bool jogarNovamente();