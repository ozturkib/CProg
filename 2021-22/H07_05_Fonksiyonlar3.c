/*
	Kullanici tarafindan girilen 2 tam sayi arasindaki sayilarin karelerini ekrana yazdirin.
	Sizin tanimlayacaginiz en az 1 fonksiyon kullaniniz.
*/
#include "stdio.h"
int KaresiniBul(int sayi);
	
int main(void){
	int sayi1, sayi2, karesi, ind;
	
	printf("*** 3 SAYIDAN EN BUYUGUNU BULMA ***\n");

	printf("1. sayiyi giriniz: ");
	scanf("%d", &sayi1);
	printf("2. sayiyi giriniz: ");
	scanf("%d", &sayi2);
	
	for(ind=sayi1; ind<sayi2; ind++){
		karesi = KaresiniBul(ind);
		printf("\n%2d nin karesi = %d", ind, karesi);	
	}
}

int KaresiniBul(int sayi){
	return sayi*sayi;
}
