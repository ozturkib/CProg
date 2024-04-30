/*
	Kullanici tarafindan girilen 3 tam sayinin en buyugunu bulan kodu yaziniz
	Sizin tanimlayacaginiz en az 1 fonksiyon kullaniniz.
*/
#include "stdio.h"
int EnBuyugunuBul(int sayi1, int sayi2, int sayi3);
	
int main(void){
	int sayi1, sayi2, sayi3, enBuyuk;
	
	printf("*** 3 SAYIDAN EN BUYUGUNU BULMA ***\n");

	printf("1. sayiyi giriniz: ");
	scanf("%d", &sayi1);
	printf("2. sayiyi giriniz: ");
	scanf("%d", &sayi2);
	printf("3. sayiyi giriniz: ");
	scanf("%d", &sayi3);
	
	enBuyuk = EnBuyugunuBul(sayi1, sayi2, sayi3);
	printf("\n%d, %d ve %d sayilarinin en buyugu %d.", sayi1, sayi2, sayi3, enBuyuk);
}

int EnBuyugunuBul(int sayi1, int sayi2, int sayi3){
	int buyukSayi = sayi1;
	if(sayi2 > buyukSayi)
		buyukSayi = sayi2;
	if(sayi3 > buyukSayi)
		buyukSayi = sayi3;
	return buyukSayi;
}
