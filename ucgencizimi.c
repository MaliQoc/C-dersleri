#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int i,j,uzunluk;
	
	printf("Taban uzunlugu: ");
	scanf("%d",&uzunluk);
	
	for(i=1;i<=uzunluk;i++)
	{
		for(j=1;j<=uzunluk-i;j++)
		{
			printf(" ");
		}
		
		// Üçgen kenarlarý dýþýnda boþluk býrakabilmek için bu bloðu kullandýk.
		
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		
		// Üçgen kenarlarý ve üçgenin içinde simetriyi bozmadan noktalarla þekli doðru tamamlayabilmek için bu bloðu kullandýk.
		
		printf("\n");
	}
	
	/* Bu kodda amaç taban uzunluðu girilen üçgeni yýldýzlarla terminal ekranýna çizdirmektir.
	Öðrenirken benim de zorlandýðým bu kodun mantýðýný deneme yanýlma yollarýyla çözebilirsiniz.
	i,j ve uzunlukla; if bloklarýndaki * ve boþluk kýsýmlarýyla oynayabilirsiniz.
	Öðrenince çok kolay gelecektir. Ýyi çalýþmalar dilerim :) */
	
	return 0;
}
