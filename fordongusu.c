#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
    /* 1- */ int i;
    
    for(i=1;i<=20;i+=2)
    {
    	printf("%d - Merhaba Balikesir\n",i);
    }
	
	// İkişer artış olduğu için toplamda 10 defa Merhaba Balıkesir yazdırır.
    
    /* FOR DÖNGÜSÜ
    Döngü içerisindeki şartlara göre içerideki işlemler gerçekleştirilir.
    (döngü nereden başlayacak;nerede bitecek;döngü kaçar kaçar artacak) mantığıyla hareket ederiz. */
    
	/* 2- */ int i;
    
    for(i=1;i<=20;i+=2)
    {
    	printf("%d\n",i);
    }
	
    // 1 den 20 ye kadar ikiþer ikiþer artýþ olur.
    
    return 0;
}
