#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int s1,s2,s3,p1,p2,ort;
    
    printf("Birinci Sinavi Girin: ");
    scanf("%d",&s1);
    
    printf("Ikinci Sinavi Girin: ");
    scanf("%d",&s2);
    
    printf("Ucuncu Sinavi Girin: ");
    scanf("%d",&s3);
    
    printf("Birinci Projeyi Girin: ");
    scanf("%d",&p1);
    
    printf("Ikinci Projeyi Girin: ");
    scanf("%d",&p2);
    
    ort=((s1+s2+s3)/3 + (p1+p2)/2)/2;
    
    if (ort>=85)
    {
    	printf("AA");
    }
    if (ort<85 && ort>=70)
    {
    	printf("BB");
    }
    if (ort<70 && ort>=60)
    {
    	printf("CC");
    }
    if (ort<60 && ort>=50)
    {
        printf("DD");
    }
    if (ort<50)
    {
    	printf("FF");
    }

    // Ortalama hesabı yaparak harf notunuzu öğrenmenizi sağlayan kodu yazmanız istenmiş.

    return 0;
}
