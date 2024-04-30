/*	
	Islev : Aritmetik islemlerin tanitimi
			Kullanicidan alacagimiz 2 sayiya tum aritmetik islemlerin uygulanip 
			sonuclarinin ekrana yazdirilmasi.
				Toplama
				Cikarma
				Carpma
				Bolme
				Mod
	Yazar : Ibrahim Ozturk
	Tarih : 14/03/2022
*/

#include "stdio.h"

int main(){
	int sayi1, sayi2; // int sayi1; int sayi2;
	float sonuc;
	
	printf("***Tam Sayilarda Aritmetik Islemler***\n");
	
	printf("Lutfen 1. sayiyi giriniz: ");
	scanf("%d", &sayi1);
	
	printf("Lutfen 2. sayiyi giriniz: ");
	scanf("%d", &sayi2);
	
	printf("%d + %d = %d\n", sayi1, sayi2, sayi1 + sayi2);
	printf("%d - %d = %d\n", sayi1, sayi2, sayi1 - sayi2);
	printf("%d * %d = %d\n", sayi1, sayi2, sayi1 * sayi2);
	printf("%d / %d = %.2f\n", sayi1, sayi2, sayi1 / (float)sayi2);
	printf("%d \%% %d = %d", sayi1, sayi2, sayi1 % sayi2);
	
	return 0;
}
