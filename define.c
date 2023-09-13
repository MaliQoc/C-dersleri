#include <stdio.h>
#include <stdlib.h>

#define max(a,b) (a>b) ? a:b
#define min(a,b) (a<b) ? a:b


/* DEFINE

#define komutu, ad�ndan da anla��labilece�i gibi tan�mlama i�lemleri i�in kullan�l�r. B�t�n yapmam�z gereken, neyin yerine neyi yazaca��m�za karar vermektir. 
Bunun i�in #define yaz�p bir bo�luk b�rakt�kan sonra, �nce kullanaca��m�z bir isim verilir, ard�ndan da yerine ge�ece�i de�er verilir. 
A�a��daki kod girilen 2 say�n�n hangisinin daha b�y���n� hesaplamaktad�r. Bunun i�in max ve min (a,b) yapt�k.
(a>b) ? a:b k�sm� a ve b ye bak�ld���nda a b den b�y�kse a y� max b yi min yap demektir. */


int main(int argc, char *argv[]) {
	
	int a,b;
	
	printf("Ilk sayiyi giriniz: ");
	scanf("%d",&a);
	
	printf("Ikinci sayiyi giriniz: ");
	scanf("%d",&b);
	
	printf("Buyuk sayi: %d\n",max(a,b));
	printf("Kucuk sayi: %d",min(a,b));
	

/* E�er max ve min komutlar�n� define ile tan�mlamasayd�k a�a��da g�sterdi�im gibi yazacakt�k:
		printf("Buyuk sayi: %d\n", (a>b) ? a:b );
		printf("Kucuk sayi: %d", (a<b) ? a:b ); */

	return 0;
}
