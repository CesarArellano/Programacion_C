#include <stdio.h>
#include <string.h>

void Leer(char Frase[]);
void Mayusculas_Invertir(char Frase[], char Frase2[]);
void Espacios(char Frase[],char Frase2[]);
void Comprobar(char Frase[], char Frase2[]);

int main (void)
{
	char Frase[200],Frase2[200];
	Leer(Frase);
	Mayusculas_Invertir(Frase,Frase2);
	Espacios(Frase,Frase2);
	Comprobar(Frase,Frase2);
}
void Leer(char Frase[])
{
	printf("Escriba la frase\n");
	scanf(" %[^\n]",Frase);
}
void Mayusculas_Invertir(char Frase[], char Frase2[])
{
	int i=0,j;
	for (j=strlen(Frase)-1; j>=0; j--)
	{
		Frase2[i]=Frase[j];
		i++;
	}
	Frase2[i]='\0';
	for(i=0; Frase[i]!='\0';i++)
	{
		if(Frase[i]>='a' && Frase[i]<='z')
			Frase[i]=Frase[i]-'a'+'A';
		if(Frase2[i]>='a' && Frase2[i]<='z')
			Frase2[i]=Frase2[i]-'a'+'A';
	}
}
void Espacios(char Frase[],char Frase2[])
{
	int i,j;
	for(i=0; Frase[i]!='\0';i++)
	{
		if(Frase[i]==' ')
		{
			for(j=i+1;Frase[j]!='\0';j++)
				Frase[j-1]=Frase[j];
			Frase[j]='\0';
		}
		if(Frase2[i]==' ')
		{
			for(j=i+1;Frase2[j]!='\0';j++)
				Frase2[j-1]=Frase2[j];
			Frase2[j]='\0';
		}
	}
}
void Comprobar(char Frase[], char Frase2[])
{
	if(strcmp(Frase,Frase2)==0)
		printf("Es un palindromo\n");
    else
    	printf("No es un palindromo\n");
}