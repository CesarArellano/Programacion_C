#include <stdio.h>

void Calcular(int Cuadrados[]);
void Imprimir(int Cuadrados[]);

int main (void)
{
	int Cuadrados[100];
	Calcular(Cuadrados);
	printf("Número   Cuadrado\n");
	Imprimir(Cuadrados);
	return 0;
}
void Calcular(int Cuadrados[])
{
	for (int i=1; i<=100;i++)
		Cuadrados[i-1]=i*i;
}
void Imprimir(int Cuadrados[])
{
	for(int i=0; i<100; i++)
		printf("%3d          %3d\n",i+1,Cuadrados[i]);
}