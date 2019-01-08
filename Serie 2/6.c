#include <stdio.h>
#include <string.h>

void LeerFrase(char Frase[]);
void Desplegar(char Frase[]); 

int main(void)
{
	char Frase[200];
	LeerFrase(Frase);
	Desplegar(Frase);
	return 0;
}
void LeerFrase(char Frase[])
{
	printf("Escriba la frase\n");
	scanf(" %[^\n]",Frase);
}
void Desplegar(char Frase[])
{
	int i,j;
	for(i=strlen(Frase)-1;i>=0;i--)
	{
		if(Frase[i]==32)
		{
			for (j= i+1; Frase[j]!='\0' && Frase[j]!=32; j++)
				printf("%c",Frase[j]);
			printf(" ");
		}
	}
	for(i=0; Frase[i]!=32;i++)
	printf("%c",Frase[i]);
    printf("\n");
}