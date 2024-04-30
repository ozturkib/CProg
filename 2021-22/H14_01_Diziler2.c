#include "stdio.h"

#define OGRENCI_SAYISI 12

int main(void){
	unsigned char notlar[] = { 1, 3, 5, 4, 7, 2, 99, 16, 45, 67, 89, 45 };
	unsigned char ogrSira;
	unsigned int toplam = 0;
	float ortalama;
	
	printf("*** Dizi Ornekleri ***");
	
	//notlarin toplamini bulunuz.
	for(ogrSira = 0; ogrSira < OGRENCI_SAYISI; ogrSira++)
		toplam += notlar[ogrSira];	//toplam = toplam + notlar[ogrSira];
	printf("\nOgrenci notlari toplami = %d", toplam);
	
	//not ortalamasinin bulunmasi
	ortalama = (float)toplam /  OGRENCI_SAYISI;
	printf("\nOgrenci sayisi : %d", OGRENCI_SAYISI);
	printf("\nOgrenci not ortalamasi = %.6f", ortalama);
		
	return 0;
}
