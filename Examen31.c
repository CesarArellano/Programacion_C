#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct def_Elemento

{
  int Real;
  int Imaginario;
  
}TipoComplejo;

void ConvertirParametros(char *argv[], TipoComplejo NumerosComplejos[], char *Signo);
void Sumar(TipoComplejo NumerosComplejos[],TipoComplejo *Resultado);
void Restar(TipoComplejo NumerosComplejos[],TipoComplejo*Resultado);
void Multiplicar(TipoComplejo NumerosComplejos[],TipoComplejo *Resultado);
void ImprimirRes(TipoComplejo NumerosComplejos[],TipoComplejo Resultado);

int main (int argc, char *argv[])
{
  FILE *Archivo;
  char NombreArchivo[200],Operacion;
  TipoComplejo NumerosComplejos[2],Resultado;
  if(argc!=3)
    {
    printf("Ponga los parametros adecuados, tonto\n");
    exit(0);
    }
  else
    {
    ConvertirParametros(argv,NumerosComplejos,&Operacion);
  switch(Operacion)
    {
    case '+':
      Sumar(NumerosComplejos,&Resultado);
      break;
    case '-':
      Restar(NumerosComplejos,&Resultado);
      break;
    case '*':
      Multiplicar(NumerosComplejos,&Resultado);
      break;
    default:
      printf("El signo esta mal, bye");
      exit(0);
      break;
    }
  ImprimirRes(NumerosComplejos,Resultado);
  strcpy(NombreArchivo,argv[2]);
  strcat(NombreArchivo,".txt");
  Archivo=fopen(NombreArchivo,"at");
  fprintf(Archivo,"[%d+%di]%c[%d+%di] = [%d+%di]\n",NumerosComplejos[0].Real,NumerosComplejos[0].Imaginario,Operacion,NumerosComplejos[1].Real,NumerosComplejos[1].Imaginario,Resultado.Real, Resultado.Imaginario);
    }
}

void ConvertirParametros(char *argv[], TipoComplejo NumerosComplejos[], char *Signo)
{
  sscanf(argv[1],"[%d%di]%c[%d%di]",&NumerosComplejos[0].Real,&NumerosComplejos[0].Imaginario,Signo,&NumerosComplejos[1].Real,&NumerosComplejos[1].Imaginario);
}

void Sumar(TipoComplejo NumerosComplejos[2],TipoComplejo *Resultado)
{
  Resultado->Real=NumerosComplejos[0].Real+NumerosComplejos[1].Real;
  Resultado->Imaginario=NumerosComplejos[0].Imaginario+NumerosComplejos[1].Imaginario;
}
void Restar(TipoComplejo NumerosComplejos[2],TipoComplejo*Resultado)
{
  Resultado->Real=NumerosComplejos[0].Real-NumerosComplejos[1].Real;
  Resultado->Imaginario=NumerosComplejos[0].Imaginario-NumerosComplejos[1].Imaginario;
}
void Multiplicar(TipoComplejo NumerosComplejos[2],TipoComplejo *Resultado)
{
  Resultado->Real=(NumerosComplejos[0].Real*NumerosComplejos[1].Real)-(NumerosComplejos[0].Imaginario*NumerosComplejos[1].Imaginario);
  Resultado->Imaginario=(NumerosComplejos[0].Real*NumerosComplejos[1].Imaginario)+(NumerosComplejos[0].Imaginario*NumerosComplejos[1].Real);
}
void ImprimirRes(TipoComplejo NumerosComplejos[2],TipoComplejo Resultado)
{
  printf("El Resultado es: [%d%+di]\n",Resultado.Real, Resultado.Imaginario);
}     

