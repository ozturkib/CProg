/*
	Kullanici tarafindan girilen 2 tam sayi arasindaki sayilarin karelerini ekrana yazdirin.
	Sizin tanimlayacaginiz en az 1 fonksiyon kullaniniz.
*/
#include "stdio.h"
int KaresiniBul(int sayi);
	
int main(void){
	int sayiKucuk, sayiBuyuk, karesi, ind;
	int gecici;
	
	printf("*** 3 SAYIDAN EN BUYUGUNU BULMA ***\n");
	printf("[1. sayi, 2, sayi]\n");
	
	printf("1. sayiyi giriniz: ");
	scanf("%d", &sayiKucuk);
	printf("2. sayiyi giriniz: ");
	scanf("%d", &sayiBuyuk);
	
	//Swaping (Yer degistirme) algoritmasi
	if(sayiBuyuk < sayiKucuk){
		gecici = sayiKucuk;
		sayiKucuk = sayiBuyuk;
		sayiBuyuk = gecici;
	}
		
	
	for(ind=sayiKucuk; ind<=sayiBuyuk; ind++){
		karesi = KaresiniBul(ind);
		printf("\n%2d nin karesi = %d", ind, karesi);	
	}
}

int KaresiniBul(int sayi){
	return sayi*sayi;
}
