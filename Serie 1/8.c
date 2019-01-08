#include <stdio.h>

int main (void)
{
	char Letra;
	printf("Introduce la letra\n");
	scanf(" %c", &Letra);
	if(Letra>='a' && Letra<='z')
		printf("La letra es minúscula.\n");
	if(Letra>='A' && Letra<='Z')
		printf("La letra es mayúscula.\n");
}