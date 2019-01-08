#include <stdio.h>

void Validacion(int d,int m, int Fechas[12], int *Alerta);
void Calculo(int d, int m, int a,int d2, int m2, int a2, int *Dias); 

int main(void)
{
	int Fechas[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int d,m,a,d2,m2,a2,Dias,Alerta=0;
	do
	{
		printf("Escribe la primer fecha con el siguiente formato: dd/mm/aaaa\n");
		scanf(" %d/%d/%d", &d,&m,&a);
		Validacion(d,m,Fechas,&Alerta);
		printf("Escribe la segunda fecha con el siguiente formato: dd/mm/aaaa\n");
		scanf(" %d/%d/%d", &d2,&m2,&a2);
		Validacion(d2,m2,Fechas,&Alerta);
		if(a>a2)
			Alerta=1;
		if(a==a2)
		{
			if(m>m2)
				Alerta=1;
		}
		if(a==a2)
		{
			if(m==m2)
			{
				if(d>d2)
				 	Alerta=1;
			}
		}
		if(Alerta==1)
			printf("Introduzca fechas correctas\n");
	} while(Alerta==1);
	Calculo(d,m,a,d2,m2,a2,&Dias);
	printf("El numero de día(s) son: %d\n", Dias);
	return 0;
}
void Validacion(int d,int m, int Fechas[12], int *Alerta)
{
 if(m>=1 && m<=12 && d>0 && d<=Fechas[m-1])
 	*Alerta=0;
 else
 	*Alerta=1;
}
void Calculo(int d, int m, int a,int d2, int m2, int a2, int *Dias)
{
	int temp1, temp2;
	temp1=(a*365)+(m*30)+d;
	temp2=(a2*365)+(m2*30)+d2;
	*Dias=temp2-temp1;
}
