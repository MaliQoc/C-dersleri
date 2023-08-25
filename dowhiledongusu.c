#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
 	int n,hane=0,toplam=0;
 
 	printf("Sayiyi giriniz: ");
 	scanf("%d",&n);

 	do {
   		toplam += (n%10);
   		n = n/10;
   		hane++;
 	}
 	while (n>0);
 
 	printf("Rakamlari toplami %d ve %d haneli.",toplam,hane);
 	
 	/* DO-WHILE DÖNGÜSÜ
 	Döngü çeþitlerinden biri de do-while döngüsüdür.
 	Önce do içerisindeki iþlemler gerçekleþtirilir. Sonra while daki þarta uyup uymadýðýna bakýlýr.
 	Yukarýdaki kodda, girilen sayýnýn rakamlarý toplamý ve kaç basamaklý olduðu bilgisi bize verilir. */
 	
	return 0;
}
