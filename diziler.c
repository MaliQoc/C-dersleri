#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	/* 1- */ char ankara[]={'A','n','k','a','r','a'};
    printf("%s\n",ankara);
    
    /* 2- */ int teksayilar[]={1,3,5,7,9};
	printf("%d\n",teksayilar[1]);
	
	/* DÝZÝLER
	Diziler C dilinde [] ile belirtilir.
	Sayý dizilerinde dizinin kaçýncý elemanýný görmek istersek yazdýrýrken onu belirtiriz.
	& koymaya gerek yoktur.
	
	/* 3- */ int sayilar[4]; //
	sayilar[0]=24;
	sayilar[1]=895;
	sayilar[2]=774;
	sayilar[3]=662;
	printf("%d\n",sayilar[3]);
	
	// Dizilerde toplama iþlemi nasýl yapýlýr aþaðýda örneðini verdim.
	
	int i,top=0,sayilar2[]={1,2,3,4,5};
	
	for(i=0;i<5;i++)
	{
		printf("%d\n",sayilar2[i]);
		top += sayilar2[i];
	}
	printf("Toplam: %d",top);

	return 0;
}
