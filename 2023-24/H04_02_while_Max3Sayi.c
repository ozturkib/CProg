#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/*
    while(sart_karsilastirmasi){
        ....
    }

    Kullanicinin girdigi azami 3 adet tam sayinin ekrana yazdirilmasi
    Limit asiminda (3'ten fazla sayi girilirse) fazla girdiginin belirtilmesi.
*/

int main(void){
    int sayi;
    int kacinciSayi = 0;

    printf("***En fazla 3 sayi alan program***");
    while(kacinciSayi < 3){
        printf("\nLutfen bir sayi giriniz: ");
        scanf("%d", &sayi);
        printf("\nGirdiginiz sayi: %d", sayi);
        kacinciSayi = kacinciSayi + 1;
    }
    printf("\nEn fazla 3 sayi girdiniz. Program bitti.");
}
