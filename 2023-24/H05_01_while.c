#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/*
    Kullanici tarafindan girilen en fazla 10 tamsayinin ekrana yazdirilmasi.

    sayac = sayac + 1;  // sayac += 1;  //  sayac++;
    sayac = sayac - 1;  // sayac -= 1;  //  sayac--;
    sayac = sayac + 3;  // sayac += 3;
    sayac = sayac * 5;  // sayac *= 5;

*/

int main(void){
    signed int girilenSayi = 0;
    unsigned int sayac = 1;

    while(sayac <= 10){
        printf("Lutfen bir sayi giriniz: ");
        scanf("%d", &girilenSayi);
        printf("%d. girilen sayi: %d \n", sayac, girilenSayi);
        sayac++; // sayac = sayac + 1;
    }
}
