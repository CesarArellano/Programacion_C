#include <stdio.h>
#define Libra 0.453592

int main (void)
{
	float Peso,kg,g;
	printf("¿Cual es su peso [En libras]?\n");
	scanf(" %f",&Peso);
	kg=Peso*Libra;
	g=kg*1000;
	printf("El peso en kilogramos es: %.3fkg\n",kg);
	printf("El peso en gramos es: %.3fg\n",g);
}