/*
	A, B, C, D, F tipindeki ogrenci notlarinin saydirilmasi
*/

#include "stdio.h"

int main(void){
	int harfNotu;
	unsigned int notA = 0;
	unsigned int notB = 0;
	unsigned int notC = 0; 
	unsigned int notD = 0;
	unsigned int notF = 0;
	
	printf("***NOT SAYMA***\n");
	
	while(harfNotu != 'q'){
		printf("\nHarf notu giriniz: ");
		harfNotu = getchar();	getchar();
		
		switch(harfNotu){
			case 'A':
			case 'a':
				notA++;
				break;
			case 'B':
			case 'b':
				notB++;
				break;
			case 'C':
			case 'c':
				notC++;
				break;
			//if((harfNotu == 'D') || (harfNotu == 'd'))			
			case 'D':
			case 'd':
				notD++;
				break;
			case 'F':
			case 'f':
				notF++;
				break;
			default:
				printf("Yanlis giris!\n");
				break;
		}
	}
	printf("\n%d adet A", notA);
	printf("\n%d adet B", notB);
	printf("\n%d adet C", notC);
	printf("\n%d adet D", notD);
	printf("\n%d adet F", notF);		
	
	return 0;
}
