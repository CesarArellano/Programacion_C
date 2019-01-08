#include <stdio.h>

void Leer(char Frase[200]);
void Desplegar(char Frase[200], char Abecedario[52], char Letra, int acum);

int main(void)
{
	char Abecedario[52]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char Frase[200], Letra;
	int acum;
	Leer(Frase);
	Desplegar(Frase,Abecedario,Letra,acum);
}
void Leer(char Frase[200])
{
	printf("Escriba la frase\n");
	scanf(" %[^\n]",Frase);
}
void Desplegar(char Frase[200], char Abecedario[], char Letra, int acum)
{
	for (int i= 0; i<52; i++)
	{
		acum=0;
		for(int j=0; Frase[j]!='\0';j++)
		{
			if(Frase[j]==Abecedario[i])
			{
				Letra=Abecedario[i];
				acum++;
			}
		}
		if(acum!=0)
			printf("La letra %c apareció: %d\n",Letra,acum);
	}
}