#include "stdio.h"
#include "stdlib.h"
#include "time.h"

/*
	Zar Atmaca
*/
void YaziTuraGoster(unsigned char yaziTuraDegeri);

int main(void){
	int sayi;
	unsigned char giris;
	
	printf("***Rastgele Sayi Ureteci***\n");
	
	while(1){
		scanf("%c", &giris);
		if(giris == 'r'){
			srand(time(0));
			sayi = 1 + (rand() % 6); // [1, 6] arasinda
			printf("%d\n", sayi);
		}
	}

	return 0;
}

