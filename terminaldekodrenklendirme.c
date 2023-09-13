#include <stdio.h>
#include <stdlib.h>

/* C dilinde renklendirme 
system("COLOR X") yaparak terminalde kodumuzun çýktýsýný renklendirebiliriz.
(X yerine hangi sayý ya da harf gelmeli aþaðýdaki listede belirtilmiþtir.) */

int main(int argc, char *argv[]) {
	
	printf("C DILINI OGRENDIM.");
	system("COLOR 2");  // COLOR 2 yazýldýðý için kodumuzun çýktýsý terminalde yeþil olacaktýr.
	
	/* 
	0=black
	1=blue
	2=green
	3=aqua
	4=red
	5=purple
	6=yellow
	7=white
	8=gray
	9=light blue
	A=light green
	B=light aqua
	C=light red
	D=light purple
	E=light yellow
	F=bright white */

	return 0;
}
