#include "stdio.h"
#include "stdlib.h"

int main(void){
	int sayi;
	unsigned char giris;
	
	printf("***Rastgele Sayi Ureteci***\n");
	
	while(1){
		scanf("%c", &giris);
		if(giris == 'r'){
			/*
				rand() fonksiyonu [0, RAND_MAX] araliginda int tipinde sayi uretiyor.
				RAND_MAX ise C:\Program Files\Dev-Cpp\MinGW64\x86_64-w64-mingw32\include\stdlib.h
				iceriside tanimli.
				RAND_MAX = 0x7fff >> 32767
				[0, 32767] arasinda rastgele int sayi uretir
			*/
			sayi = rand();
			printf("Rastgele sayi = %d\n", sayi);
		}
	}

	return 0;
}
