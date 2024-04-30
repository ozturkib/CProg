#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/*
    0                Beyaz
    255              Gri
    512              Siyah
    diger [0, 512]   Ara renk
    haricinde        Gecersiz renk
*/

int main(void){
    unsigned int renkDegeri = -100;

    if (renkDegeri >= 0 && renkDegeri <= 512){
        printf("Renk: ");
        switch(renkDegeri){
            case 0:
                printf("Beyaz");
                break;
            case 255:
                printf("Gri");
                break;
            case 512:
                printf("Siyah");
                break;
            default:
                printf("Ara Renk");
        }
    }
    else
        printf("Gecersiz Renk!");
}
