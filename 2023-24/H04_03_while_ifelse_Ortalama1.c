#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/*
    Kullanicidan alinan [0, 100] aralağında 4 ogrenci tam sayi notunun aritmetik ortalamasini bulan kodu yaziniz.
*/

int main(void){
    int sinavNotu;
    int ogrenciSira = 0;
    int toplam;

    printf("*** Sinif not ortalamasi bulma ***");
    while(ogrenciSira < 4){
        printf("\nLutfen bir not giriniz: ");
        scanf("%d", &sinavNotu);
        if(sinavNotu <= 100 && sinavNotu >= 0){
            toplam = toplam + sinavNotu;
            ogrenciSira = ogrenciSira + 1;
        }
        else{
            printf("Gecersiz not girdiniz!\n");
        }
    }
    printf("\nSinif not ortalamasi: %f", toplam/(float)ogrenciSira);
}
