#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
    1-10 arasinda sayan bir sayici bunyesinde sayicinin 4'ten buyuk olmasi durumunda sayma isleminden cikan
    programi yaziniz.

    break ile kullanim.
        Sayici: 1
        Sayici: 2
        Sayici: 3
        Sayici: 4

    continue ile kullanim.
        Sayici: 1
        Sayici: 2
        Sayici: 3
        Sayici: 4
        Sayici: 6
        Sayici: 7
        Sayici: 8
        Sayici: 9
        Sayici: 10
*/
int main(void){
    unsigned short int sayici;
    /*
    for(sayici = 1; sayici <= 10; sayici++){
        if(sayici == 5)
            continue;
        printf("Sayici : %hd\n", sayici);
    }*/
    for(sayici = 1; sayici <= 10; sayici++){
        if(!(sayici % 3)) //Uce bolunuyorsa o adimi/sayiyi atla.
            continue;
        printf("Sayici : %hd\n", sayici);
    }
    return 0;
}
