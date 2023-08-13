#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char gskadro[35]="GALATASARAY 2021-22 ANA KADROSU";
	char direktor[20]="FATIH TERIM";
	char dizilis[15]="(4-2-3-1)";
	char kaleci[10]="Muslera";
	char solbek[20]="Patrick Van Aanholt";
	char stoper1[10]="Nelsson";
	char stoper2[10]="Luyindama";
	char sagbek[10]="Boey";
	char ortasaha1[10]="Taylan";
	char ortasaha2[10]="Berkan";
	char solkanat[150]="Emre Kilinc";
	char onnumara[10]="Cicaldau";
	char sagkanat[10]="Morutan";
	char forvet[10]="Mohamed";
	
	// char deðiþkenlerde tanýmlama yaparken bu þekil bir kullaným yapabiliriz. C de her satýrda noktalý virgül kullanýlýr.
	
    printf("%s\n\n\n",gskadro);
	printf("%s\n\n",direktor);
	printf("%s\n\n",dizilis);
	printf("%s\n",kaleci);
	printf("%s\n",solbek);
	printf("%s\n",stoper1);
	printf("%s\n",stoper2);
	printf("%s\n",sagbek);
	printf("%s\n",ortasaha1);
	printf("%s\n",ortasaha2);
	printf("%s\n",solkanat);
	printf("%s\n",onnumara);
	printf("%s\n",sagkanat);
	printf("%s",forvet);
	
	
	/* char deðiþkeniyle düz yazý bastýrabilirsiniz. Galatasaray'ýn bir kadro örneðini bu þekilde yazdýrmýþýz. printf komutu yazdýrmaya yarar. 
	Ýçerisindeki %s ve virgülden sonra yazýlan deðiþken ismiyle char ve string karakterler printf e çekilmiþ olur. */
	
	return 0;
}
