#include "stdio.h"

#define UZUNLUK	6

int main(void){
	int index;
	int dizim[UZUNLUK] = {1, 10, 1000, -5, 9999, 1};
	
	//Dizinin elemanlarinin gosterilmesi
	for(index = 0; index < UZUNLUK; index++)
		printf("%d >>> %d\n", index, dizim[index]);
		
	//Dizinin elemanlarinin degistirilmesi
	//Dizin her bir elemaninin degeri bulundugu indexin 2 kati olsun.
	//dizim = [0, 2, 4, 6, 8, 10]
	for(index = 0; index < UZUNLUK; index++)
		dizim[index] = index * 2;

	printf("-----------\n");
	dizim[0] = -100;
	//o anki dizinin ilk eleman degerine dokunmamak sartiyla 
	//her bir dizi elemani bir onceki elemanın 3 fazlasi olsun.
	for(index = 1; index < UZUNLUK; index++)
		dizim[index] = dizim[index-1] + 3;


	for(index = 0; index < UZUNLUK; index++)
		printf("%d >>> %d\n", index, dizim[index]);

			
	return 0;
}
