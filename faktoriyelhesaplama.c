#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int i,faktor,k;
	faktor=1;
	
	printf("Sayi girin: ");
	scanf("%d",&k);
	
	for(i=1;i<=k;i++)
	{
		faktor=faktor*i;
		printf("%d\n",faktor);
	}
	printf("Sonucunuz: %d",faktor);
	
	// Kullanýcýnýn girdiði sayýnýn faktöriyelini alýr.
	
	return 0;
}
