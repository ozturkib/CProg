/*
	10 ogrencilik bir sinif icin basarili/basarisiz notunun girilmesi.
	Eger 8 veya fazla basarili ogrenci varsa egitmene tebrik mesaji goster.
	Islem sonucunda girdilerin istatistiginin sunulmasi.
		Basarili 	> 1
		Basarisiz	> 2
*/

#include "stdio.h"

int main(void){
	int ogrenciNotu; //1 ya da 2 olabilir.
	int ogrenciBasarili=0, ogrenciBasarisiz=0;
	
	printf("*** Ogrenci Not Girisi ***\n");
	
	while(1){
		printf("\nLutfen bir not giriniz 1(Basarili) / 2(Basarisiz):");
		scanf("%d", &ogrenciNotu);
		
		if(ogrenciNotu == 1){
			ogrenciBasarili = ogrenciBasarili + 1;
			printf("\n*****basarili.\n");
		}
		else if(ogrenciNotu == 2){
			ogrenciBasarisiz = ogrenciBasarisiz + 1;
			printf("\n*****basarisiz.\n");
		}
		else{
			printf("\n*****gecersiz.\n");
		}
		
		//Istatistikler
		printf("Toplam  	= %d\n", ogrenciBasarili+ogrenciBasarisiz);
		printf("Basarili 	= %d\n", ogrenciBasarili);
		printf("Basarisiz 	= %d\n", ogrenciBasarisiz);
	}
}
