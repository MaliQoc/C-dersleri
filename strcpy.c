#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// strcpy ve strncpy fonksiyonlarýnýn devreye girmesi için string.h kütüphanesini kullandýk.

int main(int argc, char *argv[]) {
	
	char kaynak[30]="Merhaba Balikesir";
	char kopya[30]="";
	
	strcpy(kopya,kaynak); // strcpy(hedef deðiþken,ana deðiþken) þeklindedir.
	printf("%s\n",kopya);
	
	/* Bir deðiþkende tanýmlý ifadeyi hedef deðiþkenin üstüne yazmak için strcpy fonksiyonunu kullanýrýz.
	Hedef deðiþkenin içerisinde ne yazarsa yazsýn ana deðiþkenin içindeki ifadenin tamamý hedef deðiþkenin içine yazýlýr.
	Bu örnekte ana deðiþken kaynak, hedef deðiþken kopyadýr. */
	
	char nereden[30]="Merhaba Balikesir";
	char nereye[30]="";
	
	strncpy(nereye,nereden,10); // strcpy(hedef deðiþken,ana deðiþken,aktarýlacak karakter sayýsý) þeklindedir.
	printf("%s",nereye);
	
	/* strcpy fonksiyonundan farký ana deðiþken içindeki ifadenin sadece belli kýsmýndaki karakterleri hedef deðiþkenin içine yazmasýdýr.
	Bu sayý da kullanýcýdan alýnýr. Örnekte n sayýdaki karakter 10 olarak belirtilmiþtir.
	nereden deðiþkenindeki ifadenin ilk 10 karakteri nereye deðiþkenine atanýr. */
	
	return 0;
}
