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
	
	/* IF-ELSE D�NG�S�
	
	if ve else d�ng�s� olmak ya da olmamak gibi d���n�lebilir. Bazen de b�yleyse ya da de�ilse olarak d���n�lebilir.
	if i�erisine yaz�lan ifade sa�lan�yorsa if blo�undaki i�lemler, sa�lanm�yorsa di�er if bloklar�ndaki veya else deki i�lemler yap�l�r. */
	
	
	
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
		printf("TEBR�KLER! Takdir belgesi almaya hak kazandiniz");
	}
	else
	{
		printf("Maalesef... Takdir belgesi alamiyorsunuz");
	}
	
	/* < > = ! & | gibi baz� operat�rlerimiz vard�r.
	1) < k���kl��� belirtir. <= k���k e�ittir anlam�nda kullan�l�r.
	2) > b�y�kl��� belirtir. >= b�y�k e�ittir anlam�nda kullan�l�r.
	�NEML�: = e�ittir i�areti anlam�na gelmez. E�itlik ifade etmek i�in == kullan�l�r.
	3) ! de�ildir anlam�nda kullan�l�r. �rne�in %2 != 0 2 ye tam b�l�nemeyen ifadeler manas�na gelir. Ba�taki % i�areti mod manas�nda kullan�lm��t�r.
	4) && ve anlam�nda kullan�l�p 2 ifadeyi ba�lar. �ki ifadenin de sa�lanmas� gerekir.
	5) || veya, ya da anlam�na gelir. �ki ifadeden biri sa�l�yorsa tamamd�r gibi d���nebiliriz.
	
	return 0;
}
