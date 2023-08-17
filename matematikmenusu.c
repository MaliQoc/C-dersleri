#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {


	 printf("*********Matematik Menusu*********\n\n\n");
	 
	 
	 printf("1- Karede Alan ve Cevre Hesabi\n");
	 printf("2- Girilen Sayinin Kubu\n");
	 printf("3- Cemberde Alan ve Cevre Hesabi\n");
	 printf("4- 5x2+7x+9 x e Gore Islemin Sonucu\n");
	 printf("5- Dikdortgende Alan ve Cevre Hesabi\n\n");
	 printf("Isleminizi Secin: ");
	 
	 
	 int sayi1,sayi2,pi,r,x,secim;
	 scanf("%d",&secim);
	 
	 pi=3;
	 
	 switch(secim)
	 {
	 	case 1: 
		printf("Karenin kenari: ");
		scanf("%d",&sayi1);
		 
		printf("Karenin alani: %d\n",(sayi1*sayi1));
	 	printf("Karenin cevresi: %d",(sayi1*4)); break;
	 	
	 	case 2: 
		 printf("Kubu alinacak sayi: ");
		 scanf("%d",&sayi1);
		 
		 printf("Sayinin kubu: %d",(sayi1*sayi1*sayi1)); break;
	 	
	 	case 3: 
		printf("Cemberin yaricapi: ");
		scanf("%d",&r);
		 
		printf("Cemberin alani: %d\n",(pi*r*r));
	 	printf("Cemberin cevresi: %d",(2*pi*r)); break;
	 	
	 	case 4: 
		 printf("x: ");
		 scanf("%d",&x);
		 
		 printf("Sonuc: %d",(5*x*x+7*x+9)); break;
	 	
	 	case 5: 
		 printf("Dikdortgenin uzun kenari: ");
		 scanf("%d",&sayi1);
		 
		 printf("Dikdortgenin kisa kenari: ");
		 scanf("%d",&sayi2);
		 
		 printf("Dikdortgenin alani: %d\n",(sayi1*sayi2));
	 	printf("Dikdortgenin cevresi: %d",(sayi1*2+sayi2*2)); break;
	 	
	 	default: printf("Hatali Tuslama Yaptiniz."); break;
	 	
	 }
	 
	 // switch-case yapýsýyla matematik menüsü oluþturduk.
	 
	return 0;
}
