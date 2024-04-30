#include "stdio.h"
#include "stdlib.h"	//rand fonksiyonu icerisinde yer alir.
#include "time.h"

/*
	[10, 100] arasinda 2000 adet rastgele tam sayinin ortalamasini bulan kodu yaziniz.
	
	rand ile rastgele sayi urettigimizde program her seferinde calistirildiginda 
	surekli ayni ortalamayi bulurken;
	srand ile rastgele sayi urettigimizde program rastgele ve makul yeni ortalama degerleri
	bulabilmekte.
*/


int main(void){
	int toplam, ind;
	float ortalama;
	
	srand(time(0));
	printf("***Rastgele Sayi Ortalamasi***\n");
	for(ind = 1; ind <= 2000; ind++){
		toplam = toplam + (rand() % 91) + 10;
	}
	ortalama = toplam / 2000.0;
	printf("2000 rastgele sayinin ortalamsi = %.2f", ortalama);
	return 0;
}
