#include <stdio.h>

void Leer_Incrementar(int *num,int *cant); 

int main(void)
{
	int num,cant=0;
	do
	{
		Leer_Incrementar(&num,&cant);
	} while(num!=0);
	printf("La cantidad de numeros leidos son: %d\n", cant);
}

void Leer_Incrementar(int *num,int *cant)
{
	printf("Introduce un numero (0 para salir)\n");
	scanf("%d",num);
	if(*num!=0)
		(*cant)++;
} 
