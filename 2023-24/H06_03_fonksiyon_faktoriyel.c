#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

/*
    double sqrt(double x);
*/
int faktoriyelBul(int sayi);
void ekranaFaktoriyeliYaz(int sayi);

int main(void){
    //double sayi = 9.0;
    //printf("%f sayisinin karekoku = %f\n", sayi, sqrt(sayi));
    int sayimiz = 5;
    ekranaFaktoriyeliYaz(sayimiz);
    return 0;
}

void ekranaFaktoriyeliYaz(int sayimiz){
    printf("%d! = %d\n", sayimiz, faktoriyelBul(sayimiz));
}

int faktoriyelBul(int sayi){
    int faktoriyel = 1;
    int sayac;
    for(sayac = 2; sayac <= sayi; sayac++)
        faktoriyel = faktoriyel * sayac;

    return faktoriyel;
}
