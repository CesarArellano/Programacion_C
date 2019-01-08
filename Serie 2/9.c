#include <stdio.h>

void LeerFrase(char Frase[]);
void Convertir(char Frase[]); 

int main(void)
{
	char Frase[200];
	LeerFrase(Frase);
	Convertir(Frase);
	return 0;
}
void LeerFrase(char Frase[])
{
	printf("Escriba la frase\n");
	scanf(" %[^\n]",Frase);
}
void Convertir(char Frase[])
{
	for(int i=0;Frase[i]!='\0';i++)
	{
		if(Frase[i]>='a' && Frase[i]<='z' && i==0 || Frase[i]>='a' && Frase[i]<='z' && Frase[i+1]==' ' || Frase[i]>='a' && Frase[i]<='z' && Frase[i-1]==' ' || Frase[i]>='a' && Frase[i]<='z' && Frase[i+1]=='\0')
			printf("%c",Frase[i]-'a'+'A');
	    else
	    	printf("%c",Frase[i]);
	}
	printf("\n");
}
