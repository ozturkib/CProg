/*
	Faiz hesaplama
	Ana para : 1000 TL
	Sure	 : 10 yil
	Oran	 : %5
	Formul	 : toplam = anapara * (1 + oran)^yil
*/

#include "stdio.h"
#include "math.h"

//#define oran 0.06 //oran = 0.06
//const int oran = 0.06;

int main(void){
	int toplam, sayac;
	int anapara = 1000;
	float oran  = 0.06;
	int yil 	= 15; 
	
	/*
	printf("*** US ALMA ***\n");
	toplam = pow(3, 2);
	printf("3^2 = %d", toplam);
	*/
	
	/*
	printf("*** FAIZ HESAPLAMA ***\n");
	toplam = 1000 * pow((1 + 0.05), 10);
	printf("10 yil sonunda  1000 TL'nin %%5 faiz ile ulastigi miktar: %d TL", toplam);		
	*/
	
	printf("*** FAIZ HESAPLAMA ***\n");
	for(sayac = 1; sayac <= yil; sayac++){
		toplam = anapara * pow((1 + oran), sayac);
		printf("%2d yil sonunda  %d TL'nin %%%.1f faiz ile ulastigi miktar: %d TL. \n", sayac, anapara, oran*100, toplam);	
	}

	return 0;
}
