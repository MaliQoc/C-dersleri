#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    
    char Ad[30],Soyad[10],Yas[2],Sehir[10],Meslek[30];
    
    /* Tanýmlarken bir diðer þekil de verinin kullanýcýdan klavye giriþiyle alýnmasýdýr.
    printfle komutu basarken içine kullanýcýdan çekilecek veri scanf ile iletilir. */
    
    printf("Adim: ");
    scanf("%s",Ad);
    
    printf("Soyadim: ");
    scanf("%s",Soyad);
    
    printf("Yasim: ");
    scanf("%s",Yas);
    
    printf("Sehrim: ");
    scanf("%s",Sehir);
    
    printf("Meslegim: ");
    scanf("%s",Meslek);
    
    printf("\n");
    
    printf("Adi: %s - Soyadi: %s\n",Ad,Soyad);
    printf("Yasi: %s\n",Yas);
    printf("Meslek: %s - Sehir: %s",Meslek,Sehir);
	
	// Burada kullanýcýdan elde ettiðimiz veriyi printfle düz þekilde terminale basmýþ oluyoruz.
	
	return 0;
}
