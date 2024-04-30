
#include "stdio.h"
int main(void){
	int sayi = 0;

	/*
		Sayi = 1, 2, .... 11
		Once artirip sonra yazdirdigi icin ve ilk degerin gosterimini atliyor.
	*/
	/*
	while(sayi <= 10){
		sayi++;
		printf("\nSayi = %d", sayi);
	}
	*/
	/*
		Sayi = 0, 1, 2, .... 10
		Once artirip sonra yazdirdigi icin ve ilk degerin gosterimini atliyor.
	*/
	/*	
	while(sayi <= 10){
		printf("\nSayi = %d", sayi);
		sayi++;
	}
	*/
	
	/*
		Sayi = 1, 2, .... 11
		Once artirip sonra yazdirdigi icin ve ilk degerin gosterimini atliyor.
	*/
	/*	
	while(sayi++ <= 10){
		printf("\nSayi = %d", sayi);
	}	
	*/
	
	
	/*	
		Sayi = 1, 2, .... 10
		Once artirip sonra yazdirdigi icin ve ilk degerin gosterimini atliyor.	
	*/
	while(++sayi <= 10){
		printf("\nSayi = %d", sayi);
	}	

}
