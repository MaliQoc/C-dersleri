#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
    int matris[4][8]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32},i,j; 
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<8;j++)
		{
			printf("%d\t",matris[i][j]);
		}
		printf("\n");
	}
	
	/* matris[satýr sayýsý][sütun sayýsý] þeklinde gösterdik. Bu kod istediðimiz matrisi elle yazdýrmamýzý saðlar. 
	\t matris gösterimleri için kullanýlýr. Sütun ve satýr olarak bölmeyi saðlar. */
	
	return 0;
}
