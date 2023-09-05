#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// string.h kütüphanesini strlen fonksiyonu için kullandýk.

int main(int argc, char *argv[]) {
	
	char kelime[100];
	
	printf("Kelimeyi giriniz: ");
	scanf("%s",kelime);
	
	printf("Kelime Uzunlugu: %d",strlen(kelime));
	
	// strlen ile girdiðiniz kelimenin uzunluðunu ölçebilirsiniz.
	
	return 0;
}
