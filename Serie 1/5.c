#include <stdio.h>

int main (void)
{
	float h,b,superficie;
	printf("¿Cuánto mide su base?\n");
	scanf("%f", &b);
	printf("¿Cuánto mide su altura?\n");
	scanf("%f", &h);
	superficie=(b*h)/2;
	printf("El área es de: %.3f m2\n",superficie);
}