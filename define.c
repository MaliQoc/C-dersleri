#include <stdio.h>
#include <stdlib.h>

#define max(a,b) (a>b) ? a:b
#define min(a,b) (a<b) ? a:b


/* DEFINE

#define komutu, adýndan da anlaþýlabileceði gibi tanýmlama iþlemleri için kullanýlýr. Bütün yapmamýz gereken, neyin yerine neyi yazacaðýmýza karar vermektir. 
Bunun için #define yazýp bir boþluk býraktýkan sonra, önce kullanacaðýmýz bir isim verilir, ardýndan da yerine geçeceði deðer verilir. 
Aþaðýdaki kod girilen 2 sayýnýn hangisinin daha büyüðünü hesaplamaktadýr. Bunun için max ve min (a,b) yaptýk.
(a>b) ? a:b kýsmý a ve b ye bakýldýðýnda a b den büyükse a yý max b yi min yap demektir. */


int main(int argc, char *argv[]) {
	
	int a,b;
	
	printf("Ilk sayiyi giriniz: ");
	scanf("%d",&a);
	
	printf("Ikinci sayiyi giriniz: ");
	scanf("%d",&b);
	
	printf("Buyuk sayi: %d\n",max(a,b));
	printf("Kucuk sayi: %d",min(a,b));
	

/* Eðer max ve min komutlarýný define ile tanýmlamasaydýk aþaðýda gösterdiðim gibi yazacaktýk:
		printf("Buyuk sayi: %d\n", (a>b) ? a:b );
		printf("Kucuk sayi: %d", (a<b) ? a:b ); */

	return 0;
}
