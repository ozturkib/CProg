/*
	
*/
#include "stdio.h"



int main(void){
	int kesit;
	int satir, sutun;
	printf("*** SAGA/SOLA BAKAN OK***\n");
	
	printf("En genis kesit uzunlugunu giriniz:\n");
	scanf("%d", &kesit);
	
	/*
	//Saga bakan yarim ok
	for(satir = 0; satir < kesit; satir++){
		for(sutun = 0; sutun < satir+1 ; sutun++){
			printf("*");
		}
		printf("\n");
	}
	*/
	//Soga bakan tam ok silindi
	//Sola bakan tam ok 
	for(satir = 0; satir < kesit; satir++){
		for(sutun = 0; sutun < (kesit-satir) ; sutun++){
			printf(" ");
		}
		for(sutun = (kesit-satir); sutun < kesit ; sutun++){
			printf("*");
		}		
		printf("\n");
	}
	for(satir = 0; satir < kesit; satir++){
		for(sutun = 0; sutun < satir ; sutun++){
			printf(" ");
		}
		for(sutun = satir; sutun < kesit ; sutun++){
			printf("*");
		}
		printf("\n");
	}			
			
	return 0;
}


