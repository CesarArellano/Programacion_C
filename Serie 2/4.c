#include <stdio.h>

void Leer(char Frase[]);
void Desplegar(char Frase[]);

int main (void)
{
	char Frase[200];
	Leer(Frase);
	Desplegar(Frase);	
}

void Leer(char Frase[])
{
	printf("Escribe la frase\n");
	scanf(" %[^\n]",Frase);
}
void Desplegar(char Frase[])
{
	for(int i=0;Frase[i]!='\0';i++)
	{
		if(Frase[i]==32)
			printf("\n");
		else
			printf("%c",Frase[i]);
	}
	printf("\n");
}