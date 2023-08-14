#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

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
	
	if ve else döngüsü olmak ya da olmamak gibi düþünülebilir. Bazen de böyleyse ya da deðilse olarak düþünülebilir.
	if içerisine yazýlan ifade saðlanýyorsa if bloðundaki iþlemler, saðlanmýyorsa diðer if bloklarýndaki veya else deki iþlemler yapýlýr. */
	
	
	
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
		printf("TEBRÝKLER! Takdir belgesi almaya hak kazandiniz");
	}
	else
	{
		printf("Maalesef... Takdir belgesi alamiyorsunuz");
	}
	
	/* < > = ! & | gibi bazý operatörlerimiz vardýr.
	1) < küçüklüðü belirtir. <= küçük eþittir anlamýnda kullanýlýr.
	2) > büyüklüðü belirtir. >= büyük eþittir anlamýnda kullanýlýr.
	ÖNEMLÝ: = eþittir iþareti anlamýna gelmez. Eþitlik ifade etmek için == kullanýlýr.
	3) ! deðildir anlamýnda kullanýlýr. Örneðin %2 != 0 2 ye tam bölünemeyen ifadeler manasýna gelir. Baþtaki % iþareti mod manasýnda kullanýlmýþtýr.
	4) && ve anlamýnda kullanýlýp 2 ifadeyi baðlar. Ýki ifadenin de saðlanmasý gerekir.
	5) || veya, ya da anlamýna gelir. Ýki ifadeden biri saðlýyorsa tamamdýr gibi düþünebiliriz.
	
	return 0;
}
