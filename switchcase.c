#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	/* 1- */ int sayi;
	
	printf("Ay numarasi giriniz: ");
	scanf("%d",&sayi);
	
	switch(sayi)
	{
		case 1: printf("Ocak"); break;
		case 2: printf("Subat"); break;
		case 3: printf("Mart"); break;
		case 4: printf("Nisan"); break;
		case 5: printf("Mayis"); break;
		case 6: printf("Haziran"); break;
		case 7: printf("Temmuz"); break;
		case 8: printf("Agustos"); break;
		case 9: printf("Eylul"); break;
		case 10: printf("Ekim"); break;
		case 11: printf("Kasim"); break;
		case 12: printf("Aralik"); break;
		default: printf("Hatali sayi girdiniz"); break;
	}
	
	/* SWITCH - CASE
	Kullanýcýdan belli bir sayý,harf vs. isteyerek her veride farklý bir sonuç vermeyi saðlayan yapýlardýr.
	Örneðin hesap makinesi için +,-,* veya / bilgisini alarak her seçenekte farklý bir iþlem yapýlmasýný saðlar.
	
	/* 2-*/ char ders;
	
	printf("Ders Kodu: ");
	scanf("%s",&ders);
	
	switch(ders)
	{
		case 't': printf("Turkce"); break;
		case 's': printf("Sosyal"); break;
		case 'm': printf("Matematik"); break;
		case 'f': printf("Fen"); break;
		default: printf("Hatali tuslama yaptiniz"); break;
	}
	
	/* switch içerisine kullanýcýnýn verisine ait deðiþken atanýr. case içlerine de verilerin kendisi tek tek atanýr.
	Her satýrdan sonra break konur. Geride kalan deðerler ya da hatalý tuþlama vs. gibi iþlemler için default satýrý atamamýz gerekir.
		
	/* 3- */ char sayi;
	
	printf("Sayi giriniz: ");
	scanf("%d",&sayi);
	
	switch(sayi)
	{
		case 1: printf("Pazartesi"); break;
		case 2: printf("Sali"); break;
		case 3: printf("Carsamba"); break;
		case 4: printf("Persembe"); break;
		case 5: printf("Cuma"); break;
		case 6: printf("Cumartesi"); break;
		case 7: printf("Pazar"); break;
		default: printf("Hatali tuslama yaptiniz"); break;
	}

	return 0;
}
