#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	printf("*******OTOPARK FIYAT OTOMASYONU*******\n\n");
	
	printf(" DEGERLI KASIYERIMIZ LUTFEN SUNLARI UNUTMAYINIZ: a=kalinan sure, b=otopark saat fiyati , c=indirim miktari , d=toplam tutar \n\n");
	
	int a,b,c,d;
	printf("Araba kac saat kaldi: ");
	scanf("%d",&a);
	b=a*10;
	
	if(a>=1 && a<4)
	{
		c=b*10/100;
		d=b-c;
		printf("Odemeniz Gereken Tutar: %d TL",d);
	}
	if(a>=4)
	{
	    c=b*20/100;
		d=b-c;
		printf("Odemeniz Gereken Tutar: %d TL",d);
	}
	
	// Bir aracýn otoparkta durduðu süreye göre farklý tarife uygulanýp, net fiyata iþlenecek bir kod yazýlmasý istenmiþ.

	return 0;
}
