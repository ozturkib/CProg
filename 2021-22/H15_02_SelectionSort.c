#include "stdio.h"

/*
	Siralama (Sorting) Algoritmalari
		- Seçme Sıralama (Selection Sort) Algoritmasi

*/

#define UZUNLUK 		6

#define BUYUKTEN_KUCUGE 0
#define KUCUKTEN_BUYUGE	1
#define SIRALAMA_YONU	BUYUKTEN_KUCUGE	



void DiziGoster(int dizim[], int uzunluk);
int EnKucukDegerinIndexiniBul(int dizim[], int baslangic, int uzunluk);
int EnBuyukDegerinIndexiniBul(int dizim[], int baslangic, int uzunluk);

int main(void){
	int dizim[UZUNLUK] = { 42, 77, 35, 12, 91, 8 };
	int ind, icInd, gecici;
	int degistirDegerInd;
	
	//Diziyi goster
	printf("Siralanmamis : \n");
	DiziGoster(dizim, UZUNLUK);
	//minDegerInd = EnKucukDegerinIndexiniBul(dizim, UZUNLUK);
	//printf("Min index = %d, min deger=%d\n", minDegerInd, dizim[minDegerInd]);
	

	for(ind = 0; ind < UZUNLUK-1; ind++){
		if(SIRALAMA_YONU == KUCUKTEN_BUYUGE){
			degistirDegerInd 		= EnKucukDegerinIndexiniBul(dizim, ind, UZUNLUK);	
			gecici 		   			= dizim[degistirDegerInd];
			dizim[degistirDegerInd] = dizim[ind];
			dizim[ind]  			= gecici;
		}
		else if(SIRALAMA_YONU == BUYUKTEN_KUCUGE){
			degistirDegerInd 		= EnBuyukDegerinIndexiniBul(dizim, ind, UZUNLUK);	
			gecici 		   			= dizim[degistirDegerInd];
			dizim[degistirDegerInd] = dizim[ind];
			dizim[ind]  			= gecici;
		}					

	}
			
	printf("Siralanmis : \n");
	DiziGoster(dizim, UZUNLUK);

	return 0;
}

int EnBuyukDegerinIndexiniBul(int dizim[], int baslangic, int uzunluk){
	int ind;
	int maxDegerInd;
	
	maxDegerInd = baslangic;
	for(ind = baslangic+1; ind < UZUNLUK; ind++){
		if(dizim[maxDegerInd] < dizim[ind])
			maxDegerInd = ind;
	}
	return maxDegerInd;
}

int EnKucukDegerinIndexiniBul(int dizim[], int baslangic, int uzunluk){
	int ind;
	int minDegerInd;
	
	minDegerInd = baslangic;
	for(ind = baslangic+1; ind < UZUNLUK; ind++){
		if(dizim[minDegerInd] > dizim[ind])
			minDegerInd = ind;
	}
	return minDegerInd;
}

void DiziGoster(int dizim[], int uzunluk){
	//Diziyi goster
	int ind;
	for(ind = 0; ind < uzunluk; ind++)
		printf("Sayim : %d\n", dizim[ind]);
	printf("\n");	
}

