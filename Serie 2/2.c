#include <stdio.h>

void Lectura(int *cant);
void LeerTemp_Calcular(int cant, float Temps[], float *media, int *cantmay);
void Desplegar(float media, int cantmay);

int main(void)
{
	int cant,cantmay=0;
	float Temps[100],media;
	do
	{
		Lectura(&cant);
	} while(cant<5 || cant>100);
	LeerTemp_Calcular(cant,Temps,&media,&cantmay);
	Desplegar(media,cantmay);grese la tempgrese la temperatura %d\n", i+1);
		scanf(" %eratura %d\n", i+1);
		scanf(" %
}
void Lectura(int *cant)
{
	printf("Cuántas temperaturas desea ingresar?\n");
	scanf(" %d", cant);
}
void LeerTemp_Calcular(int cant, float Temps[], float *media, int *cantmay)
{
	float sumatemps=0;
	int acum=0;
	for(int i=0; i<cant; i++)
	{
		printf("Ingrese la temperatura %d\n", i+1);
		scanf(" %f", &Temps[i]);
		sumatemps+=Temps[i];
		acum++;
	}
	*media=sumatemps/acum;
	for(int i=0; i<cant; i++)
	{
		if (Temps[i]>=*media)
		{
		*cantmay+=1;
		}
	}

}
void Desplegar(float media, int cantmay)
{
	printf("La media de las temperaturas es: %f\n",media);
	printf("Cantidad de temperaturas mayores o iguales a la media son: %d\n",cantmay);
}