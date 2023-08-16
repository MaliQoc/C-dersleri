#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
    /* 1- */ int i;
    
    for(i=1;i<=20;i+=2)
    {
    	printf("%d - Merhaba Balikesir\n",i);
	}
	
	// Ýkiþer artýþ olduðu için toplamda 10 defa Merhaba Balýkesir yazdýrýr.
    
    /* FOR DÖNGÜSÜ
    Döngü içerisindeki þartlara göre içerideki iþlemler gerçekleþtirilir.
    (döngü nereden baþlayacak;nerede bitecek;döngü kaçar kaçar artacak) mantýðýya hareket ederiz
    
	/* 2- */ int i;
    
    for(i=1;i<=20;i+=2)
    {
    	printf("%d\n",i);
	}
	
	// 1 den 20 ye kadar ikiþer ikiþer artýþ olur.
    
	return 0;
}
