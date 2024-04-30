#include <stdio.h>
#include <stdlib.h>

int main(void){
    int puan;
    char harfNotu;

    printf("Harf notu icin puan degerini giriniz: ");
    scanf("%d", &puan);

    if(puan > 100){
        harfNotu = 'G';
    }
    else if (puan >= 90){
        harfNotu = 'A';
    }
    else if (puan >= 80){
        harfNotu = 'B';
    }
    else if (puan >= 70){
        harfNotu = 'C';
    }
    else if (puan >= 60){
        harfNotu = 'D';
    }
    else if (puan >= 0){
        harfNotu = 'F';
    }
    else{
        harfNotu ='G';
    }
    printf("%d puanina karsilik harf notu : %c", puan, harfNotu);
}
