/*
	Her adımda bir ogrencinin notu istenecek ve girilecek.
	Her adımda o adıma kadar olan ogrenci aritmetik not ortalamasi gosterilececek.
*/

#include "stdio.h"		//printf fonksiyonunun tanimli oldugu kutuphane.
#include "stdbool.h"	//true-false anahtarlarinin tanimli oldugu kutuphane

int main(void){
	int ogrenciNotu;
	//int ortalama;
	int toplam = 0;
	int ogrenciSayisi = 0;

	printf("*** Sinif Not Ortalamasi Hesaplama ***");

	while(true){
		printf("\nOgrenci notunu giriniz: ");
		scanf("%d", &ogrenciNotu);
		
		toplam += ogrenciNotu; //toplam = toplam + ogrenciNotu;
		ogrenciSayisi++; //ogrenciSayisi = ogrenciSayisi + 1;
		//printf("\nGirilen ogrenci sayisi = %d", ogrenciSayisi);
		
		//ortalama = toplam / ogrenciSayisi;
		//printf("\nOrtalama = %d", ortalama);
		printf("\n%d ogrenci notunun aritmetik ortalamasi = %d", ogrenciSayisi, (toplam / ogrenciSayisi));
	}
	
	return 0;
}
