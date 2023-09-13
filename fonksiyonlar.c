#include <stdio.h>
#include <stdlib.h>

int top(int a,int b)
{
	int top=a+b;
}

/* FONKSÝYONLAR
C dilinde ana fonksiyonumuz main fonksiyonudur ancak onun haricinde fonksiyonlar oluþturup bu harici fonksiyonlarý main içinden çaðýrarak çalýþtýrabiliriz.
Örneðin yukarýda toplama yapmak amacýyla oluþturduðumuz top fonksiyonunda parametre olarak a ve b yi atadýk. main fonksiyonunda c ve d deðiþkenleri
top fonksiyonundaki a ve b yerine geçer. Ardýndan TOP deðiþkeniyle yukarýdaki top deðiþkeninin eþitlendiði a + b iþlemi yapýlmýþ oldu. */

// C de ASLA unutmayýn ki büyük ve küçük harf farký vardýr ve en ufak bir farklýlýk çoðu þeyi deðiþtirir.

int main(int argc, char *argv[]) {
	
	int TOP,c,d;
	
	printf("Ilk sayiyi giriniz: ");
	scanf("%d",&c);
	
	printf("Ikinci sayiyi giriniz: ");
	scanf("%d",&d);
	
	TOP=top(c,d);
	
	printf("Toplam: %d",TOP);
	
	return 0;
}
