/*
	Kullanici tarafindan girilen iki tamsayinin arasindaki
		esitlik, kucukluk ve buyukluk 
	iliskilerini gosteren kodu yaziniz.
*/
#include "stdio.h"

int main(void){
	int sayi1, sayi2;
	
	printf("*** Iki Sayi Arasindaki Iliski ***\n");
	
	printf("1. sayiyi giriniz: ");
	scanf("%d", &sayi1);
	
	printf("2. sayiyi giriniz: ");
	scanf("%d", &sayi2);
	
	if(sayi1 == sayi2)
		printf("\nSayilar esittir.");
	else
		printf("\nSayilar esit degildir.");
		
	if(sayi1 < sayi2 )
		printf("\n1. sayi 2. sayidan kucuktur.");
	else
		printf("\n1. sayi 2. sayidan kucuk degildir.");

	if(sayi1 > sayi2)
		printf("\n1. sayi 2. sayidan buyuktur.");
	else
		printf("\n1. sayi 2. sayidan buyuk degildir.");
		
	return 0;
}
