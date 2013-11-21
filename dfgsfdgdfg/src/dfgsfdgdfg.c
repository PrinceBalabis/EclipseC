/*
 ============================================================================
 Name        : dfgsfdgdfg.c
 Author      : Prince Stevie-Ray Charles Balabis
 Version     :
 Copyright   : Copyright @ Prince Balabis
 Description : Swap in C.
 ============================================================================
 */

#include <stdio.h>

void testswap(int*, int*);

int main(void) {
	puts("!!!VARIABLE SWAP WITH POINTER!!!");
	//SŠtter vanliga variabler som ska swapas
	int x = 111;
	int y = 222;

	// Skriver ut variablerna innan swap
	printf("Variabel x: %d\n", x);
	printf("Variabel y: %d\n", y);

	printf("Minnesadress fšr x: %d\n", &x);
	printf("Minnesadress fšr y: %d\n", &y);

	// Kšr swappen med pekare
	testswap(&x, &y);
	// Skriver ut variablerna efter swap med pekare
	printf("Variabel efter swap x: %d\n", x);
	printf("Variabel efter swap y: %d", y);
}

void testswap(int*px, int*py)
{
    int temp;
    temp = *px;
    *px = *py;
    *py = temp;


}
