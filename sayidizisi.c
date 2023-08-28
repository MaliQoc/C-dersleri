#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int dizi[100],i,eleman;
	float top=0,ort;
	
	printf("Dizi kac elemanli olacak: ");
	scanf("%d",&eleman);
	
	for(i=0;i<eleman;i++)
	{
		printf("Dizinin %d. degerini girin: ",i+1);
		scanf("%d",&dizi[i]);
		top += dizi[i];
		ort=top/eleman;
	}
	
	for(i=0;i<eleman;i++)
	{
		printf("%d. Eleman: %d\n",i+1,dizi[i]);
	}
	
		printf("Toplam: %f - Girilen Degerlerin Ortalamasi : %f ",top,ort);
	
	// Elemanlarý girilen sayý dizisinin; teker teker tüm elemanlarýný, elemanlarý toplamýný ve ortalamasýný veren C kodunu yazdým.
	
	return 0;
}
