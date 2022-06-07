#include "stdio.h"

/*
	Siralama (Sorting) Algoritmalari
		- Kabarcık Sıralama (Buble Sort) Algoritmasi

*/

#define UZUNLUK 		6

#define BUYUKTEN_KUCUGE 0
#define KUCUKTEN_BUYUGE	1
#define SIRALAMA_YONU	BUYUKTEN_KUCUGE	

/*
//		dizim[0] ve dizim[1]
//		dizim[1] ve dizim[2]
//		dizim[2] ve dizim[3]
//		...
//		>>
//		dizim[ind] ve dizim[ind+1]
*/

void DiziGoster(int dizim[], int uzunluk);
int main(void){
	int dizim[UZUNLUK] = { 42, 77, 35, 12, 91, 8 };
	int ind, icInd, gecici;
	
	//Diziyi goster
	printf("Siralanmamis : \n");
	DiziGoster(dizim, UZUNLUK);
	
	
	for(ind = 0; ind < UZUNLUK-1; ind++){
		for(icInd = 0; icInd < UZUNLUK-ind-1; icInd++){
			if(SIRALAMA_YONU == KUCUKTEN_BUYUGE){
				if(dizim[icInd] > dizim[icInd+1]){
					gecici 		   = dizim[icInd+1];
					dizim[icInd+1] = dizim[icInd];
					dizim[icInd]   = gecici;
				}
			}
			else if(SIRALAMA_YONU == BUYUKTEN_KUCUGE){
				if(dizim[icInd] < dizim[icInd+1]){
					gecici 		   = dizim[icInd+1];
					dizim[icInd+1] = dizim[icInd];
					dizim[icInd]   = gecici;
				}
			}					
		}
	}
			
	printf("Siralanmis : \n");
	DiziGoster(dizim, UZUNLUK);
	return 0;
}

void DiziGoster(int dizim[], int uzunluk){
	//Diziyi goster
	int ind;
	for(ind = 0; ind < uzunluk; ind++)
		printf("Sayim : %d\n", dizim[ind]);
	printf("\n");	
}


