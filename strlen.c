#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// string.h k�t�phanesini strlen fonksiyonu i�in kulland�k.

int main(int argc, char *argv[]) {
	
	char kelime[100];
	
	printf("Kelimeyi giriniz: ");
	scanf("%s",kelime);
	
	printf("Kelime Uzunlugu: %d",strlen(kelime));
	
	// strlen ile girdi�iniz kelimenin uzunlu�unu �l�ebilirsiniz.
	
	return 0;
}
