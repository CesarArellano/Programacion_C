#include <stdio.h>

int main (void)
{
	int num, suma=0;
	for(int i=1; i<=200; i++)
		suma+=i;
	printf("La suma es de: %d\n",suma);
}