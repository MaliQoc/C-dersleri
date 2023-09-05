#include <stdio.h>
#include <stdlib.h>

typedef int d1;
	
/* typedef ifadesini kullanarak deðiþken tiplerini (int, char, float, vs.) farklý isimlerle tanýmlayabiliriz. 
Bu þekilde mevcut bir veri türü için yeni bir isim veya yeni bir veri türü oluþturabiliriz */

int main(int argc, char *argv[]) {
	
	int toplam;
	
	d1 d2,d3; // Yukarýda typedef int d1; olduðu için d1 i int niyetine kullanmýþ olduk.
	
	printf("Birinci sayiyi giriniz: ");
	scanf("%d",&d2);
	
	printf("Ikinci sayiyi giriniz: ");
	scanf("%d",&d3);
	
	toplam = d2 + d3;
	
	printf("Toplam: %d",toplam);
	
	return 0;
}
