#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// strcat fonksiyonu kullanýlacaðý için string.h kütüphanesini kullandýk.

int main(int argc, char *argv[]) {
	
	char kitapad[30],yazar[30],kitapyazar[60];
	
	printf("Kitabin adini giriniz: ");
	gets(kitapad);
	puts(kitapad);
	
	printf("\n");
	
	printf("Yazarin adini giriniz: ");
	gets(yazar);
	puts(yazar);
	
	strcat(kitapyazar,kitapad);
	strcat(kitapyazar," ");
	strcat(kitapyazar,"--->");
	strcat(kitapyazar," ");
	strcat(kitapyazar,yazar);
	
	printf("\n\n");
	
	printf("%s",kitapyazar);
	
	/* strcat fonksiyonu deðiþkenlerdeki ifadelerin birleþtirilmesini saðlar.
	strcat(içinde birleþtirme yapýlacak deðiþken, içindeki ifadenin birleþtirileceði deðiþken ya da ifade) þeklinde kullaným yaparýz. */
	
	return 0;
}
