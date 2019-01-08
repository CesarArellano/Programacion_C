#include <stdio.h>

void LeerFrase(char Frase[]);
void Convertir(char Frase[], char Mayus[], char Minus[]); 

int main(void)
{
	char Frase[200],Mayus[200],Minus[200];
	LeerFrase(Frase);
	Convertir(Frase,Mayus,Minus);
	puts(Mayus);
	puts(Minus);
	return 0;
}
void LeerFrase(char Frase[])
{
	printf("Escriba la frase\n");
	scanf(" %[^\n]",Frase);
}
void Convertir(char Frase[], char Mayus[], char Minus[])
{
	int i;
	for(i=0;Frase[i]!='\0';i++)
	{
		if(Frase[i]>='a' && Frase[i]<='z')
			Mayus[i]=Frase[i]-'a'+'A';
		else
			Mayus[i]=Frase[i];
		if(Frase[i]>='A' && Frase[i]<='Z')
			Minus[i]=Frase[i]-'A'+'a';
		else
			Minus[i]=Frase[i];
	}
	Mayus[i]='\0';
	Minus[i]='\0';
}