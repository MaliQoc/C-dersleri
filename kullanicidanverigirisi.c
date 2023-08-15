#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    char Ad[30],Soyad[10],Yas[2],Sehir[10],Meslek[30];
    
    /* Tanımlarken bir diğer şekil de verinin kullanıcıdan klavye girişiyle alınmasıdır.
    printfle komutu basarken içine kullanıcıdan çekilecek veri scanf ile iletilir. */
    
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
	
    // Burada kullanıcıdan elde ettiğimiz veriyi printfle düz şekilde terminale basmış oluyoruz.
	
    return 0;
}
