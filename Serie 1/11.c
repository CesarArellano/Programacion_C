#include <stdio.h>

int main (void)
{
	int num, mayor=0;
	do
	{
		printf("Introduce un numero positivo diferente de 0 [-99 para salir] \n");
		scanf(" %d", &num);
		if(num>0){
			if(num>mayor)
				mayor=num;
		}
	} while(num!=-99);
	printf("El numero mayor es: %d\n", mayor);
}