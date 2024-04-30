#include <stdio.h>
#include <stdlib.h>
/*
    Kullanicidan alinan 2 tamsayinin buyukluk-kucukluk karsilastir
    masini yapiniz.
    5 2
    5 sayisi 2 sayisindan buyuktuur.
    2 3
    2 sayisi 3 sayisindan kucuktur.
    6 6
    6 sayisi 6 sayisina esittir.
*/





int main(void){
    int sayi1, sayi2;
    printf("Lutfen 1. sayiyi giriniz: ");
    scanf("%d", &sayi1);

    printf("Lutfen 2. sayiyi giriniz: ");
    scanf("%d", &sayi2);

    printf("%d", sayi1);
    if(sayi1 > sayi2)
        printf(" > ");
    else if(sayi1 < sayi2)
        printf(" < ");
    else
        printf(" = ");
    printf("%d", sayi2);

    return 0;
}
