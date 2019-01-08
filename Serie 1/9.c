#include <stdio.h>

int main (void)
{
	char Letra,Letra2;
	printf("Introduce la letra 1\n");
	scanf(" %c", &Letra);
	printf("Introduce la letra 2\n");
	scanf(" %c", &Letra2);
	if(Letra2>Letra)
		printf("Estan en orden alfabético.\n");
	else
		printf("No están en orden alfabético.\n");
}