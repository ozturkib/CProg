/*	
	İslev : Kullanicidan istenen 2 tam sayinin toplamini ekrana yazan programi yaziniz.
	Yazar : Ibrahim Ozturk
	Tarih : 07/03/2022
*/

#include "stdio.h"

int main(void){
	int sayi1;
	int sayi2;
	int toplam;
	
	printf("Lutfen 1. sayiyi giriniz: ");
	scanf("%d", &sayi1);

	printf("Lutfen 2. sayiyi giriniz: ");
	scanf("%d", &sayi2);
	
	toplam = sayi1 + sayi2;
	printf("%d + %d = %d", sayi1, sayi2, toplam);
	return 0;
}
