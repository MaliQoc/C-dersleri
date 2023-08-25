#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Matematikle alakalý bazý iþlerde math.h kütüphanesini kullanýrýz.
   stdio.h main fonksiyonunda temel iþlemlerin büyük kýsmýný içinde barýndýran bir kütüphanedir. C nin temel kütüphanesi olarak bilinir.
   stdlib.h ise dinamik bellek yönetimi, rastgele sayý üretimi, arama, sýralama ve dönüþtürme gibi çeþitli genel amaçlar için kullanýlýr.
   DevC++ ta stdio.h ve stdlib.h her yeni program açýldýðýnda otomatik gelir. */
   
int main(int argc, char *argv[]) {

	int a,b,c;
	float x1,x2;
	float delta;
	
	printf("Denklemin a'si: ");
	scanf("%d",&a);
	
	printf("Denklemin b'si: ");
	scanf("%d",&b);
	
	printf("Denklemin c'si: ");
	scanf("%d",&c);
	
	delta= b*b - 4*a*c;
	x1= (-b + (sqrt(delta)) ) /2*a;
	x2= (-b - (sqrt(delta)) ) /2*a;
	
	printf("Denklemin kokleri: %f ve %f",x1,x2);
	
	/* C dilinde kök alma iþlemi sqrt ile yapýlýr. sqrt math.h kütüphanesi gerektirir. Ayriyeten üs alma iþlemi pow ile yapýlýr.
	Yukarýda 2. dereceden 1 bilinmeyenli herhangi bir denklemin kökleri C dilinde nasýl bulunur onun örneðini verdim. */
	
	return 0;
}
