#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// strcmp fonksiyonu kullanýlacaðý için string.h kütüphanesi gerekti.

int main(int argc, char *argv[]) {
	
	char a[20],b[20];
	
	printf("Birinci kelimeyi giriniz: ");
	scanf("%s",a);
	
	printf("Ikinci kelimeyi giriniz: ");
	scanf("%s",b);
	
	if(strcmp(a,b)==0)
	{
		printf("AYNI");
	}
	else
	{
		printf("FARKLI");
	}
	
/* strcmp iki ifadeyi karþýlaþtýrmak için kullanýlýr. strcmp(ifade1,ifade2) þeklinde kullanýlmasý gerekir.
   strcmp(ifade1,ifade2) == 0 demek iki ifade arasýnda fark yok demektir. != 0 olursa fark olduðu anlamýna gelir.
   strcmp fonksiyonu kullanýldýktan sonra ortaya çýkan sonucun sayýsal hali; ifadeler arasý fark varsa 0 dan farklý, fark yoksa 0 a eþittir.
   NOT = Büyük küçük karakter farkeder çünkü ASCII tablosunda büyük ve küçük karakterlerin int karþýlýðý farklýdýr. 
   Örneðin a = 97 A = 65 */
   
	return 0;
}
