#include <stdio.h>
#include <stdlib.h>

/*
    scanf
    degisken tanimlama - int

    Gorev tanimi:
    Kullanicidan alinacak olan 2 tam sayinin
    toplamini kullaniciya gosteren programi yaziniz!
*/


int main(void){
    int sayi1, sayi2, toplam;
    //int sayi1;
    //int sayi2;
    //int toplam;
    printf("Lutfen bir tam sayi giriniz (1. sayi): ");
    scanf("%d", &sayi1);
    //printf("Kullanicinin girdigi sayi: %d", sayi1);
    printf("Lutfen bir tam sayi giriniz (2. sayi): ");
    scanf("%d", sayi2);
    scanf("%d", &sayi2);

    toplam = sayi1 + sayi2;
    //printf("Toplam = ", toplam); // Neden toplami gostermedigi placeholder uzerinden tartisildi.
    printf("Toplam = %d\n", toplam);         // neden daha iyi formatlama yapilabilir?
    printf("Toplam %d\n", toplam);           // neden daha iyi formatlama yapilabilir?
    printf("Sayi1 + Sayi2 = %d\n", toplam);  // neden daha iyi formatlama yapilabilir?
    printf("%d + %d = %d\n", toplam, sayi1, sayi2); // neden olmamali tartisildi
    printf("----------------->");
    printf("%d + %d = %d\n", sayi1, sayi2, toplam);
}

