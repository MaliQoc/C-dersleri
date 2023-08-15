#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	printf("...Ogrenci Ortalama Hesaplama Sistemi...\n");
	printf("******************************************\n\n");
	
	
	/* 1- */ float s1,s2,s3,p1,p2,ort;
	
	printf("Birinci Sinavi Girin: ");
	scanf("%f",&s1);
	
	printf("Ikinci Sinavi Girin: ");
	scanf("%f",&s2);
	
	printf("Ucuncu Sinavi Girin: ");
	scanf("%f",&s3);
	
	printf("Birinci Projeyi Girin: ");
	scanf("%f",&p1);
	
	printf("Ikinci Projeyi Girin: ");
	scanf("%f",&p2);
	
	ort=((s1+s2+s3)/3 + (p1+p2)/2)/2;
	printf("Ortalama: %f\n\n",ort);

	if(ort>=50)
	{
		printf("Sinifi gectiniz");
	}
	else
	{
		printf("Sinifi gecemediniz\n\n");
	}

	
	/* IF-ELSE DÖNGÜSÜ
	
	if ve else döngüsü olmak ya da olmamak gibi düşünülebilir. Bazen de böyleyse ya da değilse olarak düşünülebilir.
	if içerisine yazılan ifade sağlanıyorsa if bloğundaki işlemler, sağlanmıyorsa diğer if bloklarındaki veya else deki işlemler yapılır. */
	
	
	
	/* 2- */ printf("...Ogrenci Ortalama Hesaplama Sistemi...\n");
	printf("******************************************\n\n");
	
	
	int a1,a2,a3,b1,b2,ortl;
	
	printf("Birinci Sinavi Girin: ");
	scanf("%d",&a1);
	
	printf("Ikinci Sinavi Girin: ");
	scanf("%d",&a2);
	
	printf("Ucuncu Sinavi Girin: ");
	scanf("%d",&a3);
	
	printf("Birinci Projeyi Girin: ");
	scanf("%d",&b1);
	
	printf("Ikinci Projeyi Girin: ");
	scanf("%d",&b2);
	
	ortl=((s1+s2+s3)/3 + (p1+p2)/2)/2;
	printf("Ortalama: %d\n\n",ortl);
	
	if(ort>=85)
	{
		printf("TEBRİKLER! Takdir belgesi almaya hak kazandiniz");
	}
	else
	{
		printf("Maalesef... Takdir belgesi alamiyorsunuz");
	}
	
	/* < > = ! & | gibi bazı operatörlerimiz vardır.
	1) < küçüklüğü belirtir. <= küçük eşittir anlamında kullanılır.
	2) > büyüklüğü belirtir. >= büyük eşittir anlamında kullanılır.
	ÖNEMLİ: = eşittir işareti anlamına gelmez. Eşitlik ifade etmek için == kullanılır.
	3) ! değildir anlamında kullanılır. Örneğin %2 != 0 2 ye tam bölünemeyen ifadeler manasına gelir. Baştaki % işareti mod manasında kullanılmıştır.
	4) && ve anlamında kullanılıp 2 ifadeyi bağlar. İki ifadenin de sağlanması gerekir.
	5) || veya, ya da anlamına gelir. İki ifadeden biri sağlıyorsa tamamdır gibi düşünebiliriz. */
	
	return 0;
}
