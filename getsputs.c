#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	char bilgi[40];
	
	printf("Bilgiyi girin: ");
	gets(bilgi);
	printf("\n");
	puts(bilgi);
	
	/* Kullanıcıdan string türünde veri alırken ilk boşluktan sonrasını alamayız.
	Bu durumda gets puts devreye girer. İletmek istediğimiz mesajın harf sayısı kadar 
	alan bırakarak mesajı iletmeyi başarabiliriz. */
	
	return 0;
}
