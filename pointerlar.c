#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	
	/* POINTERS (ÝÞARETÇÝLER)
	Ýþaretçiler, bazý iþleri çok daha yüksek performansla yapmamýza yardýmcý olur; hatta dinamik bellek ayrýmý gibi iþlemleri iþaretçiler olmadan yapamayýz. 
	Bellek yönetimimizi daha iyi yapabilmek, dolayýsýyla kodumuzun performansýný arttýrabilmemiz için iþaretçileri öðrenmemiz þarttýr.
	Her deðiþken bellekte bir yer kaplar. Bu deðiþkenlerin belleðin neresinde olduðunu adresler ile tutarýz. Bir deðiþkenin tutulduðu adrese deðiþkenimizin baþýna & koyarak ulaþabiliriz. */
	
	int a=5;
	int b=8;
	int c=9;
	char arti='a';
	double d=18.25;
	
	printf("%d\n",a);
	printf("%d\n",b);
	printf("%d\n",c);
	printf("%c\n",arti);
	printf("%f\n",d);
	
	printf("\n\n Bellek Adresleri \n\n");
	
	printf("%x\n",&a);
	printf("%x\n",&b);
	printf("%x\n",&c);
	printf("%x\n",&arti);
	printf("%x",&d);
	
	int e=5; 
	
	/* Diðer bütün deðiþkenler gibi iþaretçileri de kullanmadan önce iþaretçimizi tanýmlamalýyýz. Aradaki * bu deðiþkenin bir iþaretçi olacaðýný belirtiyor olacak.
	Baþa yazdýðýmýz veri tipi ne olursa olsun, iþaretçinin tuttuðu bilgi aynýdýr: bir bellek adresini temsil eden uzun bir onaltýlýk (hexadecimal) sayý. 
	Farklý veri tiplerinin iþaretçileri arasýndaki tek fark, iþaretçinin iþaret ettiði deðiþken veya sabitin veri türüdür. */
	
	int *s=&d;
	
	// Her deðiþken bellekte bir yer kaplar, bu deðiþkenlerin belleðin neresinde tutulduðunu adresler ile tutarýz. Deðiþkenin tutulduðu adrese deðiþkenimizin baþýna & koyarak ulaþabiliriz.
	
	printf("Deger: %d\n",e);
	printf("Adres: %x\n",s);
	
	char harf='b';
	char *bc=&harf;
	
	printf("Deger: %c\n",harf);
	printf("Adres: %x",bc-=2);
	
	return 0;
}
