/*
	Dairenin cevresini ve alanini hesaplayan 
	Girdi bilgileri cm cinsinden
	Cikti bilgileri  m cinsinden
*/
#include "stdio.h"

#define PI 3.14

int main(void){
	int yaricapCM;
	float alanM, cevreM;
	printf("***Dairenin cevresi ve alanini hesaplama***\n");
	
	printf("Lutfen yaricapi (r) giriniz (cm): ");
	scanf("%d", &yaricapCM);
	
	cevreM = 2 * PI * yaricapCM * 0.01; 
	alanM  = PI * yaricapCM * yaricapCM * 0.01 * 0.01;
	//alan  = PI * pow(yaricap, 2);
	
	printf("Yaricapi=%d cm olan dairenin alani = %.5f, cevresi = %.5f", yaricapCM, alanM, cevreM);
	return 0;
}
