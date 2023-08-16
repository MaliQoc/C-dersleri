#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int i,a,b,c,d;
	
	a=1;
	b=1;
	c=1;
	
	printf("%d\n",a);
	printf("%d\n",b);
	printf("%d\n",c);
	
	for(i=1;i<13;i++)
	{
		d=a+b+c;
		a=b;
		b=c;
		c=d;
		printf("%d\n",d);
	}
	printf("Sonucunuz: %d",d);
	
	// Tribonacci dizisinin C dilinde nasýl yazýldýðýnýn bir örneðidir.
	
	return 0;
}
