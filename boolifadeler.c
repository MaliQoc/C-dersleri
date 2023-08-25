#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// stdbool.h kütüphanesi true ve false u tanýmlar. bool veri tipinde kullanýlýr.

int main(int argc, char *argv[]) {
	
	int i,sayi,top=0;
	
	for (i=0;true;i++)
	{
		printf("Eglenmek icin sayi gir! (Cikmak icin -1 e basin): ");
	    scanf("%d",&sayi);
		{
		if (sayi== -1) break;
		}
		top += sayi;
	}
	printf("Toplam: %d",top);
	
	/* true kelimesiyle döngü sonsuza kadar devam eder. Kodda -1 ifadesi girilince durdurulacaðý ifade ediliyor.
	Durdurma iþlemi break komutuyla gerçekleþtirilir ve kod durdurulur. En sonda döngü durana kadar devam eden toplama iþleminin sonucu karþýmýza çýkar. */
	
	return 0;
}
