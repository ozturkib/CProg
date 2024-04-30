#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
    Ogrenci gecerli not [0-100]
    Gecme notu : 40

    Klavyeden -1 girene kadar sinifaki ogrencilere ait girilen tam sayi notlar icin
    Sinif ortalamasini bulabilecek ve
    kac kisinin gecip kac kisinin kaldigini ve gec/kalma istatistiklerini veren programi yaziniz.
*/
int main(void){
    signed short int sinavNotu;
    unsigned short int ogrenciGecen = 0;
    unsigned short int ogrenciTumu  = 0;
    while(true){
        printf("Lutfen [0-100] araliginda sinav notunu giriniz: ");
        scanf("%hd", &sinavNotu);
        printf("Girdiginiz not: %hd\n", sinavNotu);

        if((sinavNotu >= 0) && (sinavNotu <= 100)){
            ogrenciTumu++;
            if(sinavNotu >= 40) // if(sinavNotu >=0 && sinavNotu <= 40)
                ogrenciGecen++;
        }
        else{
            printf("Gecersiz not girdiniz!\n");
        }

        printf("************ ISTATISTIKLER ************\n");
        printf("Ogrenci sayisi (GECEN): %hd\n", ogrenciGecen);
        printf("Ogrenci sayisi (KALAN): %hd\n", ogrenciTumu - ogrenciGecen);
        printf("Ogrenci sayisi (TUMU ): %hd\n", ogrenciTumu);
    }

}
