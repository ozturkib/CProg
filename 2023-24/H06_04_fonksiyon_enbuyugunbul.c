#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

/*
    Verilen 3 tamsayidan en buyugunu bulan fonksiyonu yaziniz.
*/
int enBuyukBul(int sayi1, int sayi2, int sayi3);
int main(void){
    int sayiA = 1001;
    int sayiB = 100;
    int sayiC = -5;
    printf("%d, %d, %d sayilarinin en buyugu = %d", sayiA, sayiB, sayiC, enBuyukBul(sayiA, sayiB, sayiC));
    return 0;
}

int enBuyukBul(int sayi1, int sayi2, int sayi3){
    int enBuyukSayi;
    if(sayi1 > sayi2){
        if (sayi1 > sayi3)
            enBuyukSayi = sayi1;
        else
            enBuyukSayi = sayi3;
    }
    else{
        if (sayi2 > sayi3)
            enBuyukSayi = sayi2;
        else
            enBuyukSayi = sayi3;
    }
    return enBuyukSayi;
}
