#include <stdio.h>

void Leer (int *n1,int *n2, int *n3, int *n4);
void Imprimir (int n1, int n2, int n3, int n4);

int main (void)
{
	int n1,n2,n3,n4;
	Leer(&n1,&n2,&n3,&n4);
	Imprimir(n1,n2,n3,n4);
	return 0;
}

void Leer (int *n1,int *n2, int *n3, int *n4)
{
	printf("Ingrese el primer numero\n");
	scanf(" %d", n1);
	printf("Ingrese el segundo numero\n");
	scanf(" %d", n2);
	printf("Ingrese el tercer numero\n");
	scanf(" %d", n3);
	printf("Ingrese el cuarto numero\n");
	scanf(" %d", n4);
}
void Imprimir (int n1, int n2, int n3, int n4)
{	
	if(n1>n2 && n1>n3 && n1>n4)
		printf("El numero mayor es: %d\n", n1);
	if(n2>n1 && n2>n3 && n2>n4)
		printf("El numero mayor es: %d\n", n2);
	if(n3>n1 && n3>n2 && n3>n4)
		printf("El numero mayor es: %d\n", n3);
	if(n4>n1 && n4>n2 && n4>n3)
		printf("El numero mayor es: %d\n", n4);
}