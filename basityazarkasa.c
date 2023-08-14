#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	printf("*****YAZARKASA*****\n\n");
	
  int a,b,c,d;
  
  printf(" DEGERLI KASIYERIMIZ LUTFEN SUNLARI UNUTMAYINIZ: a=satilan kitap, b=kitap fiyati , c=indirim miktari , d=toplam tutar \n\n");
  
  printf("Kac kitap sattiniz:  ");
  scanf("%d",&a);
  b=a*40;
  
  if(a>0 && a<=10)
  {
  	c=b*10/100;
  	d=b-c;
  	printf("fiyat: %d TL",d);
  }
  if(a>10 && a<=20)
  {
  	c=b*20/100;
  	d=b-c;
    printf("fiyat: %d TL",d);
  }
  if(a>20)
  {
  	c=b*30/100;
  	d=b-c;
  	printf("fiyat: %d TL",d);
  }
    
    // Satýlan kitap sayýsýna göre yapýlacak indirimler vardýr. Buna göre net fiyat hesabýný yapacak kodu yazmamýz istenmiþ.
	 
	return 0;
}
