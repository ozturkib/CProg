/*	
	Islev : [0-100] araligindaki tam sayi yuzluk basari notunu 
			harf basari notuna donusturen programi yaziniz.
					[70-100]	> A
					[60-70)		> B
					[50-60)		> C
					[40-50)		> D
					[0-40)		> F 
	Yazar : Ibrahim Ozturk
	Tarih : 14/03/2022
*/

#include "stdio.h"

int main(void){
	int yuzlukNot;
	char harfNot;

	printf("*** YUZLUK NOT > HARF NOT DONUSTURME ***\n");
	printf("Yuzluk basari notunu giriniz: ");
	scanf("%d", &yuzlukNot);
	
	if(yuzlukNot <= 100){
		if(yuzlukNot >=0){
			if(yuzlukNot>=70)
				harfNot = 'A';
			else if(yuzlukNot>=60)
				harfNot = 'B';
			else if(yuzlukNot>=50)
				harfNot = 'C';
			else if(yuzlukNot>=40)
				harfNot = 'D';
			else
				harfNot = 'F';
				
			printf("%d yuzdelik notunun harf notu = %c", yuzlukNot, harfNot);
		}
		else
			printf("Gecersiz Not!\n");		
	}
	else
		printf("Gecersiz Not!\n");
	
	return 0;
}
