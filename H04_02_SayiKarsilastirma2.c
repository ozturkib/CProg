/*
	Kullanici tarafindan girilen iki tamsayinin arasindaki
		esitlik, kucukluk ve buyukluk 
	iliskilerini gosteren kodu yaziniz.
*/
#include "stdio.h"

int main(void){
	int sayi1, sayi2;
	
	printf("*** Iki Sayi Arasindaki Iliski ***\n");
	
	printf("1. sayiyi giriniz: ");
	scanf("%d", &sayi1);
	
	printf("2. sayiyi giriniz: ");
	scanf("%d", &sayi2);
	
	if(sayi1 == sayi2)
		printf("\n%d = %d", sayi1, sayi2);
	else
		printf("\n%d != %d", sayi1, sayi2);
		
	if(sayi1 < sayi2 )
		printf("\n%d < %d", sayi1, sayi2);
	else
		printf("\n%d !< %d", sayi1, sayi2);

	if(sayi1 > sayi2)
		printf("\n%d > %d", sayi1, sayi2);
	else
		printf("\n%d !> %d", sayi1, sayi2);
		
	return 0;
}
