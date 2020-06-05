/*
*@file 8.c
*@brief Escriba un algoritmo que permita convertir una frase introducida en mayúsculas y minúsculas
*a una frase de sólo mayúsculas y a una frase de sólo minúsculas.
*@author César Arellano
*@date 04/06/2020
*/

#include <stdio.h>
#include <stdlib.h>

void convertirCadenas(char fraseOriginal[],char fraseMay[], char fraseMin[]);

int main (void)
{
  char frase[200],fraseMayusculas[200],fraseMinusculas[200];
  printf("Escribe la frase: ");
  scanf(" %[^\n]",frase);
  convertirCadenas(frase,fraseMayusculas,fraseMinusculas);
  system("clear"); // Borrar contenido de la terminal.
  printf("Frase original: %s\n",frase);
  printf("Frase en mayúsculas: %s\n",fraseMayusculas);
  printf("Frase en minúsculas: %s\n",fraseMinusculas);
  return 0;
}

/*
*@brief Esta función convierte la frase original en mayúsculas y en minúsculas (La devuelve en una cadena distinta).
*@author César Arellano
*@param char fraseOriginal[]
*@param char fraseMay[]
*@param char fraseMin[]
*@return void
*/
void convertirCadenas(char fraseOriginal[],char fraseMay[], char fraseMin[])
{
	int i;

	for(i = 0; fraseOriginal[i] != '\0'; i++)
	{
		fraseMay[i] = fraseOriginal[i];
	    fraseMin[i] = fraseOriginal[i];

	    if(fraseOriginal[i] >= 'a' && fraseOriginal[i] <='z') // Convertir a mayúsculas
	    {
	      fraseMay[i] = fraseOriginal[i]-'a'+'A';
	    }
	    if(fraseOriginal[i] >= 'A' && fraseOriginal[i] <='Z') // Convertir a minúsculas
	    {
	      fraseMin[i] = fraseOriginal[i]-'A'+'a';
	    }
	}

	fraseMay[i] = '\0'; // Colocamos caracter de fin de línea a las dos cadenas.
	fraseMin[i] = '\0';
}