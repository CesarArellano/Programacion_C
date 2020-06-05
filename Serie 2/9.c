/*
*@file 9.c
*@brief Escriba una variante del programa anterior, en el que el programa convierta la primera letra y
*la última letra de cada palabra de la frase a mayúsculas.
*@author César Arellano
*@date 04/06/2020
*/

#include <stdio.h>
#include <stdlib.h>

void convertirFrase(char fraseOriginal[], char fraseMod[]);

int main (void)
{
	char frase[200],fraseModificada[200];
  printf("Escribe la frase: ");
  scanf(" %[^\n]",frase);
  convertirFrase(frase,fraseModificada);
  system("clear");
  printf("Frase original: %s\n",frase);
  printf("Frase modificada: %s\n",fraseModificada);
	return 0;
}

/*
*@brief Esta función convierte la frase original en mayúsculas los caracteres de los extremos de cada palabra).
*@author César Arellano
*@param char fraseOriginal[]
*@param char fraseMod[]
*@return void
*/

void convertirFrase(char fraseOriginal[], char fraseMod[])
{
	int i;
	for(i = 0; fraseOriginal[i] != '\0'; i++)
	{
		if((fraseOriginal[i] >= 'a' && fraseOriginal[i] <= 'z') && (fraseOriginal[i+1] == ' ' || fraseOriginal[i-1] == ' ' || fraseOriginal[i+1] == '\0' || i == 0))
			fraseMod[i] = fraseOriginal[i]-'a'+'A';
  	else
			fraseMod[i] = fraseOriginal[i];
  }
  fraseMod[i] = '\0';
}
