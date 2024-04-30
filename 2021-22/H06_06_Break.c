#include "stdio.h"
int main(void){
	int sayi = 0;

	/*
	while(++sayi){
		printf("\nSayi = %d", sayi);
		if(sayi == 5)
			break;
	}
	*/
	/*
	for(sayi = 0; ; sayi++){
		printf("\nSayi = %d", sayi);
		if(sayi == 10)
			break;
	}
	*/
	for(sayi = 0; sayi < 15; sayi++){
		if(sayi == 10)
			continue;		
		printf("\nSayi = %d", sayi);
	}
	return 0;
}
