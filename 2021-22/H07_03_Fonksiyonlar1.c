#include "stdio.h"

int topla(int sayiA, int sayiB);

int main(void){
	int sayi1 = 5;
	int sayi2 = 3;
	int toplam;
	
	//toplam = sayi1 + sayi2;
	toplam = topla(sayi1, sayi2);
	
	printf("%d + %d = %d", sayi1, sayi2, toplam);
	return 0;
}

int topla(int sayiA, int sayiB){
	int toplamAB;
	toplamAB = sayiA + sayiB;
	return toplamAB;
}
