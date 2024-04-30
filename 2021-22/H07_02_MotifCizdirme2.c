/*
Ekrana asagidaki motifi basan programi yaziniz.
			*
			**
			***
			****
			*****
			******
			*******
			********
			********* 
			**********
*/
#include "stdio.h"
#define GOSTERIM	'*'

int main(void){
	unsigned char satir, sembol;
	
	for(satir=1; satir<=10; satir++){
		for(sembol=1; sembol<=satir; sembol++)
			printf("%c", GOSTERIM);
		printf("\n");
	}
				
	return 0;
}
