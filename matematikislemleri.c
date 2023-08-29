#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Math.h kütüphanemizi ekleyelim. Yoksa kod çalýþsa bile altta uyarý verecektir.

int main(int argc, char *argv[]) {
	
	
	int a;
	double kok;
	
	printf("Sayiyi giriniz: ");
	scanf("%d",&a);
	
	kok = sqrt(a);
	printf("Sonuc: %.6lf\n",kok);
	
	
	// Karekök alma iþlemini C dilinde bu þekilde yaparýz.
	
	
	float b,c,us;
	
	printf("Taban: ");
	scanf("%f",&b);
	
	printf("Us: ");
	scanf("%f",&c);
	
	us = pow(b,c);
	printf("Sonuc: %.6f\n",us);
	
	
	// Üs alma iþlemini C dilinde bu þekilde yaparýz.
	
	
	double d,ust,alt;
	
	printf("Degeri girin: ");
	scanf("%lf",&d);
	
	alt = floor(d);
	printf("Alt Sonuc: %lf\n",alt);
	
	ust = ceil(d);
	printf("Ust Sonuc: %lf\n",ust);
	
	
	// Girilen tam olmayan bir sayýnýn alt ve üstündeki tam sayýyý öðrenebilmek için bu kod gereklidir.
	
	
	double e,mutlak;
	
	printf("Sayiyi girin: ");
	scanf("%lf",&e);
	
	mutlak = fabs(e);
	printf("Sonuc: %.lf\n",mutlak);
	
	
	// Mutlak deðer bulma iþlemini C dilinde bu þekilde yaparýz.
	
	
	double f,logaritma,logaritma2;
	
	printf("Sayiyi girin: ");
	scanf("%lf",&f);
	
	logaritma = log10(f);
	printf("Sonuc: %.8lf\n",logaritma);
	
	logaritma2 = log(f);
	printf("Sonuc: %.8lf\n",logaritma2);
	
	
	// Onluk tabanda ya da düz logaritma iþlemini C dilinde bu þekilde yaparýz.
	
	
	double g,sonucsin,sonuccos;
	
	printf("Dereceyi girin: ");
	scanf("%lf",&g);
	
	sonucsin= sin(g);
	printf("sin%.lf: %lf\n",d,sonucsin);
	
	sonuccos= cos(g);
	printf("cos%.lf: %lf",d,sonuccos);
	
	// Açýnýn sinus ve cosinus deðerini öðrenmek için C dilinde böyle bir kullaným yaparýz.
	
	return 0;
}
