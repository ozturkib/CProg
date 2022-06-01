#include "stdio.h"
#include "string.h"

#define OGRENCI_SAYISI 12
#define HARF_NOTU		9
const char* harfNotlari[] = {   "FF", "FD", "DD",  "DC",  "CC", "CB",  "BB", "BA", "AA"};

/*
	https://i0.wp.com/techqualitypedia.com/wp-content/uploads/2021/01/Histogram-1.png?resize=768%2C625&ssl=1
	https://www.eskimo.com/~scs/cclass/int/sx5.html
		
*/

char* SayiNotunuHarfNotunaDonustur(unsigned int sayiNotu);

int main(void){
	unsigned int notlar [] = {10, 90, 86, 77, 20, 40, 45, 35, 100, 95, 82, 17};
	unsigned int frekans[HARF_NOTU]	= {0, 0, 0, 0, 0, 0, 0, 0, 0};
	
	unsigned int sira, ind;
	//Tablo seklinde gosterim
	/*
		Harf_Notu	Ogrenci_Sayisi
			AA			5
			BA			3
			BB			1
			...
			FF			2
	*/

	static char* geciciHarfNotu;
	//unsigned int notum = 0;
	//geciciHarfNotu = SayiNotunuHarfNotunaDonustur(notum);
	//printf("%d notunun harf notu karsiligi = %s\n", notum, geciciHarfNotu);
	for(sira=0; sira<OGRENCI_SAYISI; sira++){
		geciciHarfNotu = SayiNotunuHarfNotunaDonustur(notlar[sira]);
		//printf("%d notunun harf notu karsiligi = %s\n", notlar[sira], geciciHarfNotu);
		for(ind=0; ind<HARF_NOTU; ind++){
			//printf("%s > %s\n", geciciHarfNotu, harfNotlari[ind]);
			if(!strcmp(geciciHarfNotu, harfNotlari[ind])){
				frekans[ind] += 1;
				break;
			}
		}
	}
	
	for(ind=0; ind<HARF_NOTU; ind++){
		printf("%s > %d   -", harfNotlari[ind], frekans[ind]);
		for(sira=0; sira<frekans[ind]; sira++){
			printf("*");
		}
		printf("\n");
	}	
	return 0;
}

char* SayiNotunuHarfNotunaDonustur(unsigned int sayiNotu){
	/*
		OKU icin girilen sayi notunun harf notu karsiligini bulur.
		http://oku.ozturkibrahim.com/images/harfNotlari.png
	*/
	int sira;
	static char harfNotu[3] = "XX"; //T, T, \0 > NULL terminator

	unsigned int araliklar [] = {      30 ,  40,    45,     50,   60,   70,   80,    90,   100 };

	for(sira=0; sira < HARF_NOTU; sira++){
		if(sayiNotu <= araliklar[sira]){
			sprintf(harfNotu, "%s", harfNotlari[sira]);
			break; 
		}
	}
			
	return harfNotu;
}

