#include <stdio.h>
#include <stdlib.h>

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
	
	// char değişkenlerde tanımlama yaparken bu şekil bir kullanım yapabiliriz. C de her satırda noktalı virgül kullanılır.
	
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
	
	
	/* char değişkeniyle düz yazı bastırabilirsiniz. Galatasaray'ın bir kadro örneğini bu şekilde yazdırmışız. printf komutu yazdırmaya yarar. 
	İçerisindeki %s ve virgülden sonra yazılan değişken ismiyle char ve string karakterler printf e çekilmiş olur. */

	// \n terminalde satır atlamanızı sağlar.
	
	return 0;
}
