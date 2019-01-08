#include <stdio.h>

void Leer(int *dia, int *mes, int *anio);
void Calcular(int dia, int mes, int anio, int *diasig, int *mesig, int *aniosig);

int main (void)
{
	int dia,mes,anio,diasig,mesig,aniosig;
	do
	{
		Leer(&dia,&mes,&anio);
	} while(mes<0 || mes>12 || dia<=0 || dia>31);
	
	Calcular(dia,mes,anio,&diasig,&mesig,&aniosig);
	printf("El día siguiente es: %02d/%02d/%02d\n",diasig,mesig,aniosig);
}

void Leer(int *dia, int *mes, int *anio)
{
	printf("Introduce la fecha con el siguiente formato [DD,MM,AA].\n");
	scanf(" %d,%d,%d",dia,mes,anio);
}
void Calcular(int dia, int mes, int anio, int *diasig, int *mesig, int *aniosig)
{
	if(anio%4==0 && (anio%100!=0 || anio%400==0))
	{
		if((mes==2 && dia==29) || (dia==30 && (mes==4 || mes==6 || mes==9 || mes==11)) || dia==31)
		{
			*diasig=1;
			*mesig=mes+1;
		}
		else
		{
			*mesig=mes;
			*diasig=dia+1;
		}
	}
	else
	{
		if((mes==2 && dia==28) || (dia==30 && (mes==4 || mes==6 || mes==9 || mes==11)) || dia==31)
		{
			*diasig=1;
			*mesig=mes+1;
		}
		else
		{
			*mesig=mes;
			*diasig=dia+1;
		}
	}

	if(*mesig==13)
	{
		*mesig=1;
		*aniosig=1;
	}
	else
		*aniosig=anio;
}
