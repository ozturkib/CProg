#include "stdio.h"
#include "stdlib.h"

/*
	Yazi Tura Atmaca
		Yazi 	> 0
		Tura	> 1
*/
void YaziTuraGoster(unsigned char yaziTuraDegeri);

int main(void){
	int sayi;
	unsigned char giris;
	
	printf("***Rastgele Sayi Ureteci***\n");
	
	while(1){
		scanf("%c", &giris);
		if(giris == 'r'){
			sayi = rand() % 2; // [0, 1] arasinda
			YaziTuraGoster(sayi);
		}
	}

	return 0;
}

void YaziTuraGoster(unsigned char yaziTuraDegeri){
	if(yaziTuraDegeri == 0)
		printf("YAZI\n");
	else if(yaziTuraDegeri == 1)
		printf("TURA\n");
}
