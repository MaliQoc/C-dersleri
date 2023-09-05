#include <stdio.h>
#include <stdlib.h>

enum sehirler
{
	adana,adiyaman,afyon,agri,amasya,ankara,antalya,artvin,aydin,balikesir
};

/* enum
Programda birçok değişkene tek tek sayısal değer vermek yerine enum kullanabiliriz.
Örneğin yukarıda ilk 10 şehrin plakasını tek tek girmek yerine enum içerisine atadık.
Adanayı ilk ifade olduğu için 0 olarak kabul ediyor. Geride kalan ifadeler 1,2,3... şeklinde otomatik numaralandırılacaktır. */

int main(int argc, char *argv[]) {
	
	enum sehirler il; // enum sehirler; int,char,float gibi bir değişken tipi olarak kullanıldı.
	
	il=ankara; // Ankaranın enum içerisindeki yerine göre sayısal değerini verecektir.
	printf("%d",il+1); // il değişkenine 1 eklememizin sebebi plakaları 0 yerine 1 den başlatması gerektiği içindir.
	
	return 0;
}
