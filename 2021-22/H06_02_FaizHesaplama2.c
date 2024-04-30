/*
	Faiz hesaplama
	Ana para : 1000 TL
	Sure	 : 10 yil
	Oran	 : %5
	Formul	 : toplam = anapara * (1 + oran)^yil
	
	Ana para ve sure kullanici tarafindan belirlenebilir olsun!
	Fakat oran sabit olsun.
*/

#include "stdio.h"
#include "math.h"

#define oran  0.06	//oran=0.06

int main(void){
	int toplam, sayac;
	int anapara;
	//const float oran  = 0.06;
	int yil; 
	
	printf("*** FAIZ HESAPLAMA ***\n");
	printf("Anaparayi giriniz: ");
	scanf("%d", &anapara);
	
	printf("Toplam yili giriniz: ");
	scanf("%d", &yil);
	
	for(sayac = 1; sayac <= yil; sayac++){
		toplam = anapara * pow((1 + oran), sayac);
		printf("%2d yil sonunda  %d TL'nin %%%.1f faiz ile ulastigi miktar: %d TL. \n", sayac, anapara, oran*100, toplam);	
	}

	return 0;
}
