#include <stdio.h>

int main (void)
{
	int num, potencia,temp;
	printf("Ingrese el número.\n");
	scanf("%d",&num);
	printf("Ingrese la potencia.\n");
	scanf("%d",&potencia);
	temp=num;
	for(int i=1;i<potencia;i++)
	num*=temp;
	printf("El resultado es: %d\n",num);
}