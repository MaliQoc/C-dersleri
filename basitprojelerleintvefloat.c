#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float su,kola,bilet,misir,toplam;
	
	// float tam olmayan say�lar� tan�mlarken kullan�l�r. �rne�in 0.2 , 10.3 gibi.
	
	printf("RESTORAN OTOMASYON-FIYAT SISTEMI\n");
	
	printf("Misir Adedi: ");
	scanf("%f",&misir);
	
	printf("Kola Adedi: ");
	scanf("%f",&kola);
	
	printf("Bilet Adedi: ");
	scanf("%f",&bilet);
	
	printf("Su Adedi: ");
	scanf("%f",&su);
	
	toplam= misir*4+kola*10+bilet*30+su*1.5;
	
	// toplam fonksiyonuna yap�lacak i�lemi at�yoruz.
	
	printf("Odemeniz Gereken Miktar: %f TL\n\n\n",toplam);
	
	// Toplam �dememiz gereken miktar toplam fonksiyonu arac�l���yla yazd�r�l�yor.
	
	int s1,s2,s3,p1,p2,ort;
	
	// int yani integer tam say�lar�n de�i�kenidir.
	
	printf("ORTALAMA HESAPLAMA SISTEMI\n");
	
	printf("Birinci Sinav Notu: ");
	scanf("%d",&s1);
	
	printf("Ikinci Sinav Notu: ");
	scanf("%d",&s2);
	
	printf("Ucuncu Sinav Notu: ");
	scanf("%d",&s3);
	
	printf("Birinci Proje Notu: ");
	scanf("%d",&p1);
	
	printf("Ikinci Proje Notu: ");
	scanf("%d",&p2);
	
	// int float gibi de�erler scanf i�inde kullan�l�rken virg�lden sonra & (ampersand - gemici d���m�) i�areti kullan�l�r.
	
	ort= ((s1+s2+s3)/3 + (p1+p2)/2)/2;
	
	printf("Ortalamaniz: %d\n",ort);
	
	// scanf veya printf i�erisinde int %d float %f ile tan�mlan�r.
	
	
	return 0;
}
