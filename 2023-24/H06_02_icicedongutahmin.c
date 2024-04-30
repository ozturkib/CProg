#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/*
    Sayfa 156
    4.36 nolu ornek
    Kodu derlemeden ciktisi sinifta tahmin edildi ve sonrasinda tahmin ile derlenmis kod ciktisi karsilastirildi.

    https://www.asciitable.com/asciifull.gif
    ASCII table dan farkli placeholder icin
    ornegin %c, %s, %d, %x farklarina deginildi.
*/

int main(void){
    int i, j, k;
    for(i = 1; i <=5; ++i){
        for(j = 1; j <= 3; ++j){
            for(k = 1; k <= 4; ++k){
                //printf("%s", "*");
                printf("%c", '*');
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
