#include "stdio.h"
int main(void){
	int sayi = 0;

	while(++sayi <= 10){
		printf("\nSayi = %d", sayi);
	}
	
	printf("\n-----------");
	sayi = 0;
	do{
		printf("\nSayi = %d", sayi);
	}while(++sayi <= 10);
	
	return 0;
}
