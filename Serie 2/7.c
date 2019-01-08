#include <stdio.h>
#include <string.h>

void LeerFrase(char Frase[]);
void Suprimir(char Frase[]); 

int main(void)
{
	char Frase[200];
	LeerFrase(Frase);
	Suprimir(Frase);
	return 0;
}
void LeerFrase(char Frase[])
{
	printf("Escriba la frase\n");
	scanf(" %[^\n]",Frase);
}
void Suprimir(char Frase[])
{
	int i,j,acum=0;
	for(i=0; Frase[i]!=32;i++)
	printf("%c",Frase[i]);
	printf(" ");
	for(i=strlen(Frase)-1;acum==0;i--)
	{
		if(Frase[i]==32)
		{
			for (j= i+1; Frase[j]!='\0'; j++)
				printf("%c",Frase[j]);
			acum=1;
			printf("\n");
		}
	}
}