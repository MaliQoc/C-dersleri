#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
    /* 1- */ int i;
    
    for(i=1;i<=20;i+=2)
    {
    	printf("%d - Merhaba Balikesir\n",i);
	}
	
	// �ki�er art�� oldu�u i�in toplamda 10 defa Merhaba Bal�kesir yazd�r�r.
    
    /* FOR D�NG�S�
    D�ng� i�erisindeki �artlara g�re i�erideki i�lemler ger�ekle�tirilir.
    (d�ng� nereden ba�layacak;nerede bitecek;d�ng� ka�ar ka�ar artacak) mant���ya hareket ederiz
    
	/* 2- */ int i;
    
    for(i=1;i<=20;i+=2)
    {
    	printf("%d\n",i);
	}
	
	// 1 den 20 ye kadar iki�er iki�er art�� olur.
    
	return 0;
}
