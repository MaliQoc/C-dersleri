#include <stdio.h>
#include <stdlib.h>

struct kitapbilgi
{
	char kitapad[20];
	char yazar[20];
	int fiyat;
	float puan;
};

/* struct
Bazý programlarda bir öðeye ait bir kaç farklý özellik için farklý tiplerde deðiþkenler kullanmamýz gerekir. 
Örneðin bir kitabýn bilgilerini tutmak istersek deðiþik tiplerde deðiþkenler kullanmamýz gerekir. 
Bu tip durumlar için C de struct kullanýlýr. struct içerisinde istenilen tipte deðiþken tanýmlanabilir. 
Bunu içindeki verileri bir arada tutan bir veri paketi olarak düþünebilirsiniz. */

int main(int argc, char *argv[]) {
	
	struct kitapbilgi kb={"Sekerportakali","Vasconseulos",10,7.25}; 
	
	// Kullanýcýdan veri alarak yapmadýðýmýz için bilgileri {} içine tek tek girdik. Yukarýdaki struct kitapbilgi bir deðiþken tipi gibi kullanýldý.
	
	printf("Kitap Ad: %s\n",kb.kitapad); 
	printf("Yazar: %s\n",kb.yazar);
	printf("Fiyat: %d\n",kb.fiyat);
	printf("Kitabin Puani: %.2f",kb.puan); // Virgülden sonra anadeðiþken.bilgideðiþkeni þeklinde kullaným yapýlmýþ.
	
	
	
	
// Aþaðýda hemen hemen ayný olayý anlattým. Aradaki fark kitabýn bilgilerinin kullanýcýdan veri alýnarak girilmesidir.
	
 /* struct kitapbilgi
{
	char kitapad[20];
	char yazar[20];
	int fiyat;
	float puan;
};

int main(int argc, char *argv[]) {
	
	struct kitapbilgi kb;
	
	printf("Kitap Adi: ");
	scanf("%s",&kb.kitapad);
	
	printf("Yazar adi: ");
	scanf("%s",&kb.yazar);
	
	printf("Fiyat: ");
	scanf("%d",&kb.fiyat);
	
	printf("Kitap Puani: ");
	scanf("%f",&kb.puan);
	
	printf("Kitap Ad: %s\n",kb.kitapad);
	printf("Yazar: %s\n",kb.yazar);
	printf("Fiyat: %d\n",kb.fiyat);
	printf("Kitabin Puani: %.2f",kb.puan); */
	
	
	return 0;
}
