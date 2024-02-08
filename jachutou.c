#include <stdio.h>
#include <stdbool.h>

bool jaChutou( char letra, char chutes[26], int chutesDados){
    
    bool achou = false;
            for(int j = 0; j < chutesDados; j++){
                if(chutes[j] == letra){
                    achou = true;
                    break;
                }
            }
    return achou;
}