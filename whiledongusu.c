#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int a=20;
	
	while(a<=100)
	{
		if(a%3==0 && a%2!=0)
		{
			printf("%d\n",a);
		}
			a++;
	}
	
	/* WHILE DÖNGÜSÜ
	while içerisindeki þart saðlandýkça döngü devam eder. Döngünün ne zaman baþlayacaðý while dan önce belirtilir.
	Arttýrma iþlemi de döngünün içerisindeki satýrlara yazýlýr. Bu kodda 20 den 100 e kadarki tüm 3 e tam bölünen ve 2 ye tam bölünmeyen sayýlar terminale yazdýrýlýr. */
	
	return 0;
}
